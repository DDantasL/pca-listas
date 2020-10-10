#include<stdio.h>
#define MAX_TAM 5

int main(){
    int x,k,z, vetPar[MAX_TAM],vetImp[MAX_TAM];
    for(int i = 0; i<15; i++){
        scanf("%d",&x);
        if (x%2==0){
            for(int j = 0;j<MAX_TAM;j++){
                vetPar[j]=x;
                k++;
                if(k == 5){
                    for(int l=0;l<MAX_TAM;l++){
                        printf("par[%d] = %d\n",l, vetPar[l]);
                    }
                }
            }
        }else{
            for(int j = 0;j<MAX_TAM;j++){
                vetImp[j]=x;
                z++;
                if(z == 5){
                    for(int l=0;l<MAX_TAM;l++){
                        printf("impar[%d] = %d\n",l, vetImp[l]);
                    }
                }
            }
        }
        for (i = 0; i < z; i++){
            printf("impar[%d] = %d\n", i, vetImp[i]);
        }
        for ( i = 0; i < k; i++){
            printf("par[%d] = %d\n", i, vetPar[i]);
        }
    }
    return 0;
}