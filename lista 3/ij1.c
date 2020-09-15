#include<stdio.h>

int main(){
    int x=1,j=60,i;
    for(x,j;j<=60 && j>=0;x+=3,j-=5){
        printf("I=%d J=%d\n",x,j);
    }
    return 0;
}