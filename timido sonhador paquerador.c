#include<stdio.h>
int main(){
    int digitosa;
    int digitosb;
    float resultado;
    int soma;
printf("insira os 2 primeiros digitos do seu nascimento:");
scanf("%d", &digitosa);
printf("insira os 2 ultimos digitos do seu nascimento");
scanf("%d",&digitosb);
soma = digitosa + digitosb;
printf("sua soma deu: %d\n", soma);
resultado = soma % 5;
printf("sua resto e: %d / 5 = %f\n", soma, resultado);
if (resultado == 0){
    printf("timido\n");
}
if (resultado == 1){
    printf("sonhador\n");
}
if (resultado == 3){
    printf("atraente\n");
}
if(resultado == 3){
    printf("irresistivel\n");
}

}