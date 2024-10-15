#include<stdio.h>
int main(){
    int quantidade;
     float valor;
    printf("quantas copias");
    scanf("%d",&quantidade);
    printf("qual sera o valor");
    if (quantidade<=100){
         valor = quantidade * 0.25;
        printf("qual sera o valor: %f",valor);
    }
    if(quantidade >100){

         valor = quantidade * 0.20;
        printf("qual sera o valor: %f",valor);
        
    }
}