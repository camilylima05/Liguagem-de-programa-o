#include<stdio.h> 
int main(){
    char estadoCivil;
    printf("estadoCivil:");
    scanf("%c", &estadoCivil);
    if(estadoCivil== 'S'){
        printf("solteiro");
    }
    if(estadoCivil== 'C'){
        printf("casado");
    }
    if(estadoCivil== 'D'){
        printf("divorciado");
    }
    if(estadoCivil== 'V'){
        printf("viuvo");
    }
}





