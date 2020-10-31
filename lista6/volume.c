#include <stdio.h>
float volume(float r);

void main(){
    float raio;
    scanf("%f",&raio);
    volume(raio);
}

void volume(float r){
    float vol;
    vol = ((4.0/3.0)*3.14*r*r*r);
    printf ("%f\n",vol);
}
