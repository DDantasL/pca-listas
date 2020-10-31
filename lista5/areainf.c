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
    for (int x = 1; x < 6; x++){
        for (int y = 11; y > 11-x; y--){
            soma += matriz[y][x];
        }
    }
    for (int x = 6; x < 11; x++){
        for (int y = 7 + x - 6; y < 12; y++){
            soma += matriz[y][x];
        }
    }
    if(O == 'S'){
        printf("%.1f\n",soma);
    }
    else if(O == 'M'){
        printf("%.1f\n", soma/30);
    }   
    return 0;
}