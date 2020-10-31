#include<stdio.h>
#include <math.h>

float delta(float a, float b, float c);

int main(){
    float a,b,c,x,r,P,S;
    scanf("%f\n %f\n %f", &a, &b, &c);
    x = delta(a,b,c);
    r = sqrt(x);
    //O calculo do baskara
    if(a == 0){
        printf("Impossivel calcular\n");
    } else if (x < 0.00){
        printf("Impossivel calcular\n");
    }else{
        P = ((-b) + r)/(2.00*a);
        S = ((-b) - r)/(2.00*a);
        printf("R1 = %.5lf\n",P);
        printf("R2 = %.5lf\n",S);
    }
    return 0;
}

float delta(float a, float b, float c){
    float x;
    x = b*b-4*a*c;
    return x;
}