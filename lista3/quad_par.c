#include <stdio.h>

int main(){
    int n,x,i = 1;
    scanf("%d",&n);
    for(i; i <= n; i++){
        if(i%2==0){
            printf("%d^2 = %d\n",i,i*i);
        }
    }
    return 0;
}