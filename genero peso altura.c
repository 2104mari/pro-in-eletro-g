#include<stdio.h>
int main(){
     char genero;
     float peso;
     float altura;
     printf("seu genero e feminino(f) ou masculino(m)?");
     scanf("%c", &genero);
     printf("insira sua altura");
     scanf("%f", &altura);
     if(genero == 'f'){
        peso = 62.1 * altura- 44.7;
        printf("o seu peso ideal e %f",peso);
     }
     if(genero == 'm'){
        peso = 72.7 * altura- 58;
        printf("o seu peso ideal e %f",peso);
     }





}