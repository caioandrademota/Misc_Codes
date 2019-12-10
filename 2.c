#include <stdio.h>
#include <stdlib.h>

int main(){
    int maior, vetor[5];

    printf("Insira 5 valores, separados por um espaço:");

    for (int i=0; i<=4;i++){
        scanf("%d ", &vetor[i]);
    }

    maior = vetor[0];
    for (int i = 0; i < 5; i++){
        if (vetor[i]>maior){
            maior = vetor[i];
        } else {
            continue;
        }
    }

    printf("Os valores inseridos são: ");
    for(int i = 0;i<5;i++){
        printf("%d ", vetor[i]);
    }

    printf("\nO maior valor é: %d\n", maior);

    return 0;
}
