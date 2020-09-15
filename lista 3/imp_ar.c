#include <stdio.h>

int x, i, cp, ci, cpo, cn;
int main (){
    x = 0;
    for(i=0;i<5;i++){
        scanf("%d",&x);
        if (x%2==0){
            cp++;
        }else if(x%2!=0){
            ci++;
        }
        if(x>0){
            cpo++;
        }else if(x<0){
            cn++;
        }
    }
    printf("%d valor(es) par(es)\n",cp);
    printf("%d valor(es) impar(es)\n",ci);
    printf("%d valor(es) positivo(s)\n",cpo);
    printf("%d valor(es) negativo(s)\n",cn);
    return 0;
}