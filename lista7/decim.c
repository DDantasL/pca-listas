#include<stdio.h>

void decre_incre(int *a, int *b);

int main(){
    int x, y;
    scanf("%d\n%d",&x,&y);
    decre_incre(&x, &y);
    printf("Numeros x decrementado: %d e numero y incrementado %d\n", x,y);
    return 0;
}

void decre_incre(int *a, int *b){
    *a = *a - 1;
    *b = *b + 1;
}
