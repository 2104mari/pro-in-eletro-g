#include<stdio.h>
int main(){
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    printf("qual a nota do 1 bimestre");
    scanf("%f", &nota1);
    printf("qual a nota do 2 bimestre");
    scanf("%f", &nota2);
    printf("qual a nota do 3 bimestre");
    scanf("%f",&nota3);
    printf("qual a nota do 4 bimestre");
    scanf("%f",&nota4);
    float media = (nota1 + nota2 + nota3 + nota4)/4;
    printf("%f",media);
    if(media>=7){
        printf("o aluno esta aprovado");

    }else if (media>=4){

        
    }else{
        
    }


    


}