#include<stdio.h>
#include<math.h>
int main(){
    int pecastotais;
    int pecasdefeituosas; 
    printf("qual o total de peças produzidas");
    scanf("%d", &pecastotais);
    printf("qual o total de peçasdefeituosas");
    scanf("%d",&pecasdefeituosas);
    float porcetagem = (pecastotais/100)* 10;
    if (porcetagem <= pecasdefeituosas){
        printf("a maquina vai precisa de manuteção %f");
    }
else if( pecasdefeituosas < porcetagem ){
    printf("a maquina nao vai precisa de manuteção%f");

}


}