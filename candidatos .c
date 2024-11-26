#include<stdio.h>
int main(){
 int a=0;
 int b=0;
 int c=0;
 int elei;
 int i;
 char voto;
 int nulo=0;
 printf("qual a quantidade de eleitores");
 scanf("%d",&elei);
 for(i=1; i<=elei; i++){
    printf("qual o seu voto");
    scanf("%c",&voto);
    scanf("%c",&voto);
    if(voto=='a'){
        a++;
    }else if(voto=='b'){
        b++;
    }else if (voto=='c'){
        c++;
    }else{
        nulo++;


    printf("%c", voto);
 }
 printf("candidato A recebeu %d\nvotos",a);
 printf("candidato B recebeu %d\n votos",b);
 printf("candidato C recebeu %d\n votos",c);
 printf("votos nulos %d\n", nulo);
}

}