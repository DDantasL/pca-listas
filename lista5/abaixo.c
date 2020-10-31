#include<stdio.h>
#define TAM 12

int main(){
    char O;
    int i,j;
    float matriz[TAM][TAM],soma = 0, media = 0;
    
    scanf("%s", &O);
    
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    for (int y = 1; y < 12; y++){
        for (int x = 11; x > 11-y; x--){
            soma += matriz[y][x];
        }
    }
    if(O == 'S'){
        printf("%.1f\n",soma);
    }
    else if(O == 'M'){
        printf("%.1f\n", soma/66);
    }   
    return 0;
}