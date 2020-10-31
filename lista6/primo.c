#include<stdio.h>

int primo(int x);

int main(){
    int num, x;
    scanf("%d", &num);
    x = primo(num);
    printf("%d\n",x);
    return 0; // tem que colocar?
}

int primo(int x){
    int result;
    for (int i = 2; i <= x / 2; i++) {
    if (x % i == 0) {
       result++;
    }
 }
    if (result == 0){
        return 1;
    }else{
        return 0;
    }
}