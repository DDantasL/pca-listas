#include <stdio.h>
#define MAX_TAM 10

int main(){
    int lista[MAX_TAM];
    for(int i=0;i<MAX_TAM;i++){
        scanf("%d",&lista[i]);
    }
    for(int i=0;i<MAX_TAM;i++){
        if(lista[i]<=0){
            lista[i] = 1;
            printf("X[%d] = %d\n",i,  lista[i]);
        }else{
            printf("X[%d] = %d\n",i , lista[i]);
        }
    }
    return 0;
}
