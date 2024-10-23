#include<stdio.h>
int main (){
    char EstadoCivil;
    printf("qual seu estado civil");
    scanf("%c", &EstadoCivil);
    if (EstadoCivil== 'S'){
        printf("Solteiro");
    }
 if(EstadoCivil== 'C'){
    printf("Casado");
 }
if(EstadoCivil== 'D'){
   printf("Divorciado");
}
if(EstadoCivil== 'V'){
    printf("Viúvo");

}


}
