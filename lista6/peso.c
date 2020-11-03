#include<stdio.h>

float peso_ideal(float alt, char sexo);

int main(){
    float x, peso;
    char y;
    scanf("%f\n%c", &x,&y);
    peso = peso_ideal(x,y);
    printf("Seu peso ideal é: %.1f\n", peso);
    return 0;
}

float peso_ideal(float alt, char sexo){
    float peso;
    if (sexo == 'M'){
        peso = 72.7*alt - 58;
        return peso;
    }else if(sexo == 'F'){
        peso = 62.1*alt - 44.7;
        return peso;
    }
}