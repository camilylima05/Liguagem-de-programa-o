#include<stdio.h> 
#include<math.h>
int main(){
 float n1;
 float n2;
 float n3;
 float n4;
 float media;
 printf("digite n1:");
 scanf("%f" , &n1);
 printf("digite n2:");
 scanf("%f", &n2);
 printf("digite n3:");
 scanf("%f", &n3);
 printf("digite n4:");
 scanf("%f", &n4);
 media = (n1+n2+n3+n4)/4;
printf("%f" , media);


if (media >=7){ 
    
    printf("o aluno esta aprovado");

}
if(media<7&&media>=4){ 
    
    printf("o aluno esta de prova final");

}
if (media<4) { 
    
    printf("o aluno esta reprovado");

}



}

 

