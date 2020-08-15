#include<stdio.h>

int main(){
    char name;
    double x,y, montante;
    scanf("%s",&name);
    scanf("%lf",&x);
    scanf("%lf",&y);
    montante = x + ((y*15.00)/100.00);

    printf("TOTAL = %.2lf\n", montante);
    return 0;
}