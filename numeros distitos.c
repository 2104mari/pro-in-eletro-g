#include<stdio.h>
int main (){
    int n1;
    int n2;
    int n3;
    int temp;
    printf("qual o primeiro numero");
    scanf ("%d", &n1);
    printf("qual o segundo numero");
    scanf("%d",&n2);
    printf("qual o terceiro numero");
    scanf("%d",&n3);
    if (n1>n3){
        temp = n3;
        n3=n1;
        n1=temp;
    }
    if(n1>n2){
        temp = n2;
        n2=n1;
        n1=temp;
    }
    if (n2>n3){
        temp = n3;
        n3=n2;
        n2=temp;
    } 
    printf("%d %d %d", n1,n2,n3);


}