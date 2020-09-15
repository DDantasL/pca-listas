#include<stdio.h>

int main(){
    int x,i=1;
    scanf("%d",&x);
    for(i; i<=10000; i++){
        if(i%x==2){
            printf("%d\n",i);
        }
    }
    return 0;
}