#include<stdio.h>
int main(){
    float numero1;
    float numero2;
    char operacao;
    int cal;
    printf("qual operacao matematica");
    scanf("%c",&operacao);
    printf("qual o numero1");
    scanf("%f",&numero1);
    printf("qual o numero2");
    scanf("%f",&numero2);
    if(operacao=='*'){
        cal=numero1* numero2;
    }else if (operacao=='/'){
        cal=numero1/ numero2;
    }else if(operacao=='+'){
        cal=numero1+ numero2;
    }else if(operacao=='-'){
        cal=numero1- numero2;
    }else{
        printf("invalido");
    }  
    printf("%d",cal);

}