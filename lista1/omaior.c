#include<stdio.h>

int main(){
    int a,b,c,d;

    scanf("%d %d %d",&a,&b,&c);
    if (a>b){
        d = a;
    }else{
        d = b;
    }
    if(c>d){
        printf("%d eh o maior\n",c);
    }else{
        printf("%d eh o maior\n",d);
    }
    return 0;
}