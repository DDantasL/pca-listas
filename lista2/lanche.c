#include<stdio.h>

int main(){
    int a,b;
    float valor;
    scanf("%d %d",&a,&b);

    if(a==1){
        valor = b*4.00;
        printf("Total: R$ %.2f\n",valor);
    }else if (a==2){
        valor = b*4.50;
        printf("Total: R$ %.2f\n",valor);
    }else if(a==3){
        valor = b*5.00;
        printf("Total: R$ %.2f\n",valor);
    }else if(a==4){
        valor = b*2.00;
        printf("Total: R$ %.2f\n",valor);
    }else if(a==5){
        valor = b*1.50;
        printf("Total: R$ %.2f\n",valor);
    }   


    return 0;
}