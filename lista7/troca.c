#include<stdio.h>

void troca(int *a, int *b);

int main(){
    int x, y;
    scanf("%d\n%d",&x,&y);
    troca(&x, &y);
    printf("Numeros trocados: %d e %d\n", x,y);
    return 0;
}

void troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
