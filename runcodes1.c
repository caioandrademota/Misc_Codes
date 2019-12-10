#include <stdio.h>

int main(){
    int vetor[20], vetdiv[20][1000], aux[1000], div = 1;
    int j = 0;

    for (int i; i<10; i++){
        scanf("%d ", &vetor[i]);
        for (div = 1; div <= vetor[i]; div ++){
            if (vetor[i]%div == 0){
                vetdiv[i][j] = div;
                aux[i] +=1;
                j++;
            }
        }
        div = 1;
    }

    for (int i = 0; i<10;i++){
        printf("os divisores de %2d são: ", vetor[i]);
        for (int j = 0; j < aux[i]; j++){
            printf("%ls ",vetdiv[j]);
        }
        printf("\n");
    }

    return 0;
}
