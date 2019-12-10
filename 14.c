#include<stdio.h>

int main(){
    int k;
    printf("insira um número k: ");
    scanf("%d", &k);

    int vetor[k], num = 0, soma = 0;
    
    for (int i = 0; i<k; i++){
        num += 2;
        vetor[i] = num;
        soma += num;
    }

    printf("os números pares positivos até k são: ");
    for (int i = 0; i<k; i++){
        printf("%d ", vetor[i]);
    }

    printf("a soma desses numeros é igual a: %d", soma);

    return 0;
}
