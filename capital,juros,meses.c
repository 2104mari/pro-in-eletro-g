#include<math.h>
#include<stdio.h>

int main(){


float capital;
float juros;
int meses;

printf("qual a capital");
scanf("%f",&capital);

printf("qual os juros");
scanf("%f", &juros);

printf("qual os meses");
scanf("%d", &meses);
float montanteF = capital*pow((1+juros/100),meses);//ponteciação 
printf("%f",montanteF);


}
