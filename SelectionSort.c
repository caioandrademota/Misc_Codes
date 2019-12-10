#include <stdio.h>

int main(){

    int vetor[1000];
    int n, i, d, pos, troca;

    printf("tamanho do vetor: ");
    scanf("%d", &n);

    printf("insira os números do Vetor: ");

    for (i = 0;i < n;i++){
        scanf("%d ", &vetor[i]);
    }

    for (i = 0;i < (n - 1);i++){
        pos = i;

        for (d = i + 1;d < n;d++){
            if (vetor[pos] > vetor[d])
                pos = d;
        }

        if (pos != i){
            troca = vetor[i];
            vetor[i] = vetor[pos];
            vetor[pos] = troca;
        }
    }
    
    printf("Vetor Ordenado por Selection Sort: ");

    for (i = 0;i < n;i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}
