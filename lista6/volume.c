#include <stdio.h>

float volume(float r);

int main(){
    float raio, aux;
    scanf("%f",&raio);
    aux = volume(raio);
    printf("O volume é: %.1f", &aux);
    return 0;
}

float volume(float r){
    float result;
    result = ((4.0/3.0)*3.14*r*r*r);
    return result;
}
