#include<stdio.h>
int main(){
 int total;
 float nota;
 float soma=0;
 int i;
 float media;
 printf("qual o total de alunos");
 scanf("%d",&total);
 for(i=1; i<=total; i++){
    printf("qual a nota do %d alunos", i);
    scanf("%f",&nota);
    soma = soma + nota;

 }
 media = soma + nota;
 printf("%f",media);



}
