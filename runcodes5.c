#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

typedef struct cand{
    char nome[20];
    float n1, n2, n3, n4;
    float media;
    int classific;
    char situ[20];
} cand;

void LendoStruct(cand *c){
    scanf("%s", c->nome);
    scanf("%f %f %f %f", &c->n1, &c->n2, &c->n3, &c->n4);
}

void MediaStruct(cand *c){
    float media;
    media = c->n1 + c->n2 + c->n3 + c->n4;
    c->media = media/4;
}

void Situation(cand *c, int vagas){
    char a[20] = "Classificado";
    char b[20] = "Aprovado";
    char d[20] = "Desclassificado";
    
    if (c->media >= 7.0 && vagas > 0){
        strcpy(c->situ, b);
    } else if (c->media >= 7.0){
        strcpy(c->situ, a);
        vagas --;
    } else {
        strcpy(c->situ, d);
    }
}

void preorder(cand *c, int qcandidatos){
    struct cand aux;
    int i, j;
    for (i = 1; i < qcandidatos; i++) {
        for (j = 0; j < qcandidatos - i; j++) {
            if (c[j].media < c[j + 1].media){
                aux = c[j];
                c[j] = c[j+1];
                c[j+1] = aux;
            }
        }
    }
}

void Classification(cand *c, int qcandidatos, int vagas){
    preorder(c, qcandidatos);
    for (int i = 0; i < qcandidatos; i++) {
        c[i].classific = 1 + i;
        Situation(&c[i], vagas);
        vagas--;
    }
}

void FinalOrdenation(cand *c, int qcandidatos, int vagas){
    struct cand aux;
    int i, j;
    Classification(c, qcandidatos, vagas);
    for (i = 1; i < qcandidatos; i++) {
        for (j = 0; j < qcandidatos - i; j++) {
            if (strcasecmp(c[j].nome, c[j + 1].nome) > 0){
                aux = c[j];
                c[j] = c[j+1];
                c[j+1] = aux;
            }
        }
    }
}

void ImprimeStruct(cand c){
    printf("%s %.2f %i %s \n", c.nome, c.media, c.classific, c.situ);
}

int main(){

    int vagas, qcandidatos;
    scanf("%i %i", &vagas, &qcandidatos);
    cand *candidatos = (cand*) malloc(qcandidatos*sizeof(cand));
    for (int i = 0; i < qcandidatos; i++){
        LendoStruct(&candidatos[i]);
        MediaStruct(&candidatos[i]);
    }
    
    FinalOrdenation(candidatos, qcandidatos, vagas);
    
    for (int i = 0; i < qcandidatos; i++){
        ImprimeStruct(candidatos[i]);
    }

    return 0;
}