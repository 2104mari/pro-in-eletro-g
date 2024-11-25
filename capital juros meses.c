#include<stdio.h>
int main(){
    float c;
    float t;
    int m;
    int i;
    float mont=0;
    printf("qual o eu capital");
    scanf("%f", &c);
    printf("qual a taxa mensal");
    scanf("%f",&t);
    printf("qual o mes");
    scanf("%d", &m);
    for(i=1; i<=m; i++){
mont=c+t;
printf("%dmont: %f\n",i,mont);
    }
}