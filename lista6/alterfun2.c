#include<stdio.h>

float soma(int num);

int main(){
    int num;
    float s;
    scanf("%d", &num);
    s = soma(num);
    printf("%.3f\n",s);
    return 0;
}

float soma(int num){
    float aux = 1.0, aux2 = 1.0;
    for(int i = 1; i <= num; i++){
        aux = aux *(1.0/i);
        aux2 = aux2 + (aux);   
    }
    return aux2;
}
