#include <stdio.h>

int main(){

    int x,y, i, j, somax = 0, somay = 0, somag;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x<y){
        for(i=x; i<=y; i++){
            if(i%13!=0){
                somax = somax + i;
            }
        }
    }else{
        for(j=y; j<=x; j++){
            if(j%13!=0){
                somay = somay + j;
            }
        }
    }
    somag = somax + somay;
    printf("%d\n", somag);

    return 0;
}