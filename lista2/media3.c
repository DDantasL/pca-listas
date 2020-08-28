#include<stdio.h>

int main(){

    float a,b,c,d,e;
    double media, mediaf;
    scanf("%f %f %f %f",&a,&b,&c,&d);

    media = ((a*2.0)+(b*3.0)+(c*4.0)+(d*1.0))/10.0;
    if(media >= 7.0){
        printf("Media: %.1lf\n",media);
        printf("Aluno aprovado.\n");
    }else if (media < 5.0){
        printf("Media: %.1lf\n",media);
        printf("Aluno reprovado.\n");
    }else if (media >= 5.0 && media <=6.9){
        printf("Media: %.1lf\n",media);
        printf("Aluno em exame.\n");
        scanf("%f",&e);
        mediaf = (media+e)/2.0;
        if (mediaf >= 5.0){
            printf("Nota do exame: %.1f\n",e);
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n",mediaf);
        }else{
            printf("Nota do exame: %.1f\n",e);
            printf("Aluno reprovado\n");
            printf("Media final: %.1lf\n",mediaf);
        }
    }
    return 0;
}