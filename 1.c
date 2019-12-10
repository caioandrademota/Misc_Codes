# include <stdio.h>

int main(){
    int i, vetor[3];

    for (i = 0; i < 3; i++){
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (vetor[i]<vetor[j]){
                int troca = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = troca;
            }
        }
    }

    for (i = 0; i < 3; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}
