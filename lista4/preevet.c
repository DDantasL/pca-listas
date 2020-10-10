#include <stdio.h>
#define MAX_TAM 10
int main(){

    int x, vet[MAX_TAM];
    scanf("%d",&x);
    vet[0] = x;

    for(int i = 1; i<MAX_TAM; i++){
        vet[i] = vet[i-1]*2;
    }
    for(int i=0;i<MAX_TAM;i++){
            printf("N[%d] = %d\n",i, vet[i]);
    }
    return 0;
}