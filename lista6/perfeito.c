#include<stdio.h>

int perfeito (int num);

int main(){
    int x, result;
    scanf("%d",&x);
    result =  perfeito(x);
    printf("%d\n", result);
    return 0;
}

int perfeito(int num){
    int aux,soma = 0;
    for(int i = 1; i <= (num-1); i++){
        aux = num % i;
        if(aux == 0){
            soma = soma + i;
        }
    }
    if(soma == num){
        return 1;
    }else{
        return 0;
    }
}