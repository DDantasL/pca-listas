#include<stdio.h>

int main(){

    int hourI, minuteI, hourF, minuteF, hourtotal, minutetotal;
    scanf("%d %d %d %d", &hourI, &minuteI, &hourF, &minuteF);

    hourtotal= hourF - hourI;

    if (hourtotal < 0){
        hourtotal = 24 + (hourF - hourI);
    }
    minutetotal = minuteF - minuteI;
    if (minutetotal < 0){
    minutetotal = 60 + (minuteF - minuteI);
    hourtotal--;
    }

    if (hourI == hourF && minuteI == minuteF){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hourtotal, minutetotal);
    }

    return 0;
}