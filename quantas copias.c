#include<stdio.h>
int main(){
    int quantidade;
     float valor;
    printf("quantas copias");
    scanf("%d",&quantidade);
    printf("qual sera o valor");
    if (quantidade<=100){
         valor = quantidade * 1/4;
        printf("qual sera o valor: %f",valor);
    }
    if(quantidade >100){

         valor = quantidade * 1/5;
        printf("qual sera o valor: %f",valor);
        
    }
}