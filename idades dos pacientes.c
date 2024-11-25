#include<stdio.h>
int main(){
    int n;
    int i;
    int idade, velho;
     velho = 0;
    printf("qual a quantidade de pacientes");
    scanf("%d",&n);

     
    for(i=1; i<=n; i++){
    printf("qual a idade dos pacientes");
    scanf("%d",&idade); 


    if(velho<idade){
        velho = idade;
    }
}
printf("%d",velho);



}