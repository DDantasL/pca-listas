#include<stdio.h>

void circulo(float raio, float *perimetro, float *area);

int main(){
    float x, y, z;
    scanf("%f",&x);
    circulo(x, &y, &z);
    printf("Perimetro: %.2f e Area: %.2f\n",y,z);
    return 0;
}

void circulo(float raio, float *perimetro, float *area){
    *perimetro = 2*3.14*raio;
    *area = 3.14*raio*raio;
}
