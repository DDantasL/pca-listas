#include<stdio.h>

int main(){
    int x,i,m=0,p=0;
    for(i=1;i<=100;i++){
        scanf("%d",&x);
        if(x>m){
            m=x;
            p=i;
        } 
    }
    printf("%d\n",m);
    printf("%d\n",p);
    return 0;
}