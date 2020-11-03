#include<stdio.h>

void quadrado(float lado, float *perimetro, float *area);

int main(){
    float x, y, z;
    scanf("%f",&x);
    quadrado(x,&y,&z);
    printf("Perimetro: %.2f e Area: %.2f\n",y,z);
    return 0;
}

void quadrado(float lado, float *perimetro, float *area){
    *perimetro = 4*lado;
    *area = lado*lado;
}
