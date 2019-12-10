# include <stdio.h>

int TrianguloDePascal(int i, int k) {
    if (i==0 || k==0 || k==i) {
        return 1;
    } else {
        return TrianguloDePascal(i-1, k-1) + TrianguloDePascal(i-1, k);
    }
}

void Saida(int count, int *a,int *b){
    for (int i = 0; i <= count; i++){
        printf("(%d,%d)\n", a[i], b[i]);
    }
}

int main(){
    int n, x, y, k = 0;
    int i = 0, g = 1, cont = 0;
    int divi[1000], divk[1000];

    scanf("%d", &n); // numero inteiro correspondente a linha inicial do trianguio de pascal
    scanf("%d", &x); // quantidade de elementos a serem explorados
    scanf("%d", &y); // numero para checar a divisibilidade

    for (i=n;g<=x;i++) {
        for (k=0;k<=i && g<=x;k++) {
            if (TrianguloDePascal(i,k) % y == 0){
                divi[cont] = i;
                divk[cont] = k;
                cont++;
                g++;
            } else {
                g++;
            }
        }
    }
    printf("%d\n", cont);
    Saida(cont-1, divi, divk);

    return 0;
}
