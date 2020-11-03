#include<stdio.h>

void converteHora(int total_segundos, int *hora, int *min, int *seg);

int main(){

    int seg_total,h,m,s;
    scanf("%d", &seg_total);
    converteHora(seg_total, &h,&m,&s);
    printf("%d:%d:%d\n",h,m,s); 

    return 0;
}

void converteHora(int total_segundos, int *hora, int *min, int *seg){
    *hora = total_segundos/3600;
    *min = (total_segundos % 3600)/60;
    *seg = (total_segundos % 3600)%60;
}
