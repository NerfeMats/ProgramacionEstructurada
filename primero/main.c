#include<stdio.h>


int main(){
int x, y;
int z, i;
float f;



//x=20;
//y=20;

for(i=0; i<3; i++)
{
printf("    %d:\n",i+1);
printf("Ingresa tu primer numero: ");
scanf("%d",&x);
printf("Ingresa tu segundo numero: ");
scanf("%d",&y);

z=x+y;
printf("la suma es: %d\n", z);

//f=70.0/3.0;
printf("ingresa tu primer numero: ");
scanf("%d",&x);

printf("ingresa tu segundo numero: ");
scanf("%d", &y);

f=(float)x/y;

printf("el cociente es %f", f);
printf("\n");
printf("_____________________________\n");
}

return 0;
}
