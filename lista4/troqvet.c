#include <stdio.h>
#define MAX_TAM 20

int main(){
    int vet[MAX_TAM], aux;
    for(int i=0;i<MAX_TAM;i++){
        scanf("%d",&vet[i]);
    }
    for(int i=0;i<10;i++){
        aux = vet[i];
        vet[i] = vet[19-i];
        vet[19-i] = aux;
    }
    for(int i=0;i<MAX_TAM;i++){
            printf("N[%d] = %d\n",i, vet[i]);
    }
    return 0;
}
