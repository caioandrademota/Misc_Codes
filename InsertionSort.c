#include <stdio.h>

int main(){

    int vetor[1000];
    int n, i, j, troca;

    printf("tamanho do vetor: ");
    scanf("%d", &n);

    printf("insira os números do Vetor: ");

    for (i = 0;i < n;i++){
        scanf("%d ", &vetor[i]);
    }

    for (i = 1; i < n; i++){
        j = i;
        while(j >= 0 && vetor[j] < vetor[j-1]){
            troca = vetor[j];
            vetor[j] = vetor[j-1];
            vetor[j-1] = troca;
            j--;
        }
    }
    
    printf("Vetor Ordenado por Selection Sort: ");

    for (i = 0;i < n;i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}
