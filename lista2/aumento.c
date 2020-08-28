#include<stdio.h>

int main(){

    float x,reajuste,novo;
    scanf("%f",&x);
    
    if(x <= 400.00){
        reajuste = (15*x)/100;
        novo = x+reajuste;
        printf("Novo salario: %.2f\n", novo);
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 15 %\n");
    }else if (x>=400.01 && x<=800.00){
        reajuste = (12*x)/100;
        novo = x+reajuste;
        printf("Novo salario: %.2f\n", novo);
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 12 %\n");
    }else if (x>=800.01 && x<=1200.00){
        reajuste = (10*x)/100;
        novo = x+reajuste;
        printf("Novo salario: %.2f\n", novo);
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 10 %\n");
    }else if (x>=1200.01 && x<=2000.00){
        reajuste = (7*x)/100;
        novo = x+reajuste;
        printf("Novo salario: %.2f\n", novo);
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 7 %\n");
    }else if (x>2000.00){
        reajuste = (4*x)/100;
        novo = x+reajuste;
        printf("Novo salario: %.2f\n", novo);
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 4 %\n");
    }
    
    return 0;
}