#include <stdio.h>

int fat(int n){
    int fatorial;
    if (n <= 1){
        return 1;
    } else {
        fatorial = n * fat (n-1);
        return (fatorial);
    }
}

int main(){
    int vetor[1000], vetorfat[1000], cont = 0;

    for(int i = 0; i<1000; i++){
        scanf("%d", &vetor[i]);
        if (vetor[i]>=0){
            vetorfat[i] = fat(vetor[i]);
            cont++;
        } else {
            break;
        }
    }

    printf("os fatorias dos numeros lidos são:\n");
    for (int i = 0; i<=cont-1; i++){
        printf("fatorial de %2d = %d\n", vetor[i], vetorfat[i]);
    }

    return 0;
}
