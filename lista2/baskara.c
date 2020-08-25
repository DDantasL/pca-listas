#include<stdio.h>
#include <math.h>

int main(){
    double A,B,C,D,P,S,R;
    scanf("%lf %lf  %lf",&A,&B,&C);
    D = (B*B)-(4.00)*(A*C);
    R = sqrt(D);

    if(A == 0){
        printf("Impossivel calcular\n");
    } else if (D < 0.00)
    {
        printf("Impossivel calcular\n");
    } else
    {
        P= ((-B) + R)/(2.00*A);
        S = ((-B) - R)/(2.00*A);
        printf("R1 = %.5lf\n",P);
        printf("R2 = %.5lf\n",S);
    }
    
    getchar();
    return 0;
}