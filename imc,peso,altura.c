#include<stdio.h>
int idade;


int main(){
    //printf("Informe sua idade");
    //scanf("%d",&idade);
    //printf("%d", idade);
 float peso;
 float altura;
    printf("qual o seu peso");
    scanf("%f", & peso);
    printf("qual a sua altura");
    scanf("%f", & altura);
    float imc=peso/(altura*altura);
    printf("%f", imc);
}
