#include<stdio.h>

char media_final(float x);

int main(){
    float x;
    char conceito;
    scanf("%f",&x);
    conceito = media_final(x);
    printf("%c\n", conceito);
    return 0;
}

char media_final(float num){
    char parametro;
    if (num >= 0.0 && num<=4.9){
        parametro = 'D';
        return parametro;
    }else if(num >= 5.0 && num<=6.9){
        parametro = 'C';
        return parametro;
    }else if(num >= 7.0 && num<=8.9){
        parametro = 'B';
        return parametro;
    }else if(num >= 9.0 && num<=10.0){
        parametro = 'A';
        return parametro;
    }
}