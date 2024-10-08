#include<stdio.h> 
int main(){
    float distancia;
    float combustivel;
    float media_consumo;
    printf("distancia:");
    scanf("%f", &distancia);
    printf("combustivel:");
    scanf("%f" , &combustivel);
    media_consumo = distancia/combustivel;
    printf("%f" , media_consumo);


}



