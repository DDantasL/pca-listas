#include <stdio.h>
#define MAX_TAM 10

int main(){
    double vet[MAX_TAM];
    for(int i=0;i<MAX_TAM;i++){
        scanf("%lf",&vet[i]);
    }
    for(int i=0;i<MAX_TAM;i++){
        if(vet[i]<=10){
            printf("A[%d] = %.1lf\n",i, vet[i]);
        }
    }
    return 0;
}
