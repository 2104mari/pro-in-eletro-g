#include<stdio.h>
int main (){

int distancia;
int combustivel;
printf ("qual a distancia pecorrida");
scanf("%d",& distancia);
printf("qual o total de combustivel gasto");
scanf("%d",& combustivel);
int media= distancia/combustivel;
printf("%d",media);
}