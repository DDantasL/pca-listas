#include <stdio.h>
#define MAX_TAM 100
int main(){

    double x, vet[MAX_TAM];
    scanf("%lf",&x);
    vet[0] = x;

    for(int i = 1; i<MAX_TAM; i++){
        vet[i] = vet[i-1]/2;
    }
    for(int i=0;i<MAX_TAM;i++){
            printf("N[%d] = %.4lf\n",i, vet[i]);
    }
    return 0;
}