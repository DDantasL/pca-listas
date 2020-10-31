#include<stdio.h>

float soma(int num);

int main(){
    int num;
    float s;
    scanf("%d", &num);
    s = soma(num);
    printf("%.1f\n",s);

    return 0;
}

float soma(int num){
    float aux = 1;
    for(int i = 2; i < num; i++){
        if(i%2==0){
            aux = aux + 1/i;
        }
    }
    return aux;
}