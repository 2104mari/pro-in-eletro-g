#include<stdio.h>
int main(){
    int idade;
    printf("qual sua idade");
    scanf("%d",&idade);
    if(idade<=10){
        printf("categoria infantil");
    }
    if(idade>11 && idade<17){
    printf("categoria juvenil");
    }
    if (idade>18){
        printf("categoria senior");
    }

}