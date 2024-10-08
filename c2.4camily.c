#include<stdio.h> 
int main(){
    float bits;
    float bitsPorSegundo;
    float tempo;
    printf("bits:");
    scanf("%f" , &bits);
    printf("bitsPorSegundo:");
    scanf("%f" , &bitsPorSegundo);
    tempo = bits/bitsPorSegundo;
    printf("%f", tempo);
   
} 