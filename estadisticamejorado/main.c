#include <stdio.h>
#include <stdlib.h>
#define max 25 //constante simbolica
//solo esta para tres calificaciones
//si se quiere mejorar , se tiene que poner más variables
int head(){
int numNota;

printf("Programa para calcular el promedio de, cuando mas, %d calificaciones\n", max);
printf("numero de calificaciones a promediar\n");
scanf("%d",&numNota);
if(numNota>max)
{
    printf("numero no valido\n");
    exit(0);
}
return numNota;
}

int main()
{
//float x0, x1, x2, x3, x4, x5;
    //x[0], x[1], x[2],x[4],x[5]
float x[max];
float prom;
int marco;
marco=head();


for(int i=0 ; i<marco ; i=i+1)
{
printf("da tu  calificacion: x%d\n",i);
scanf("%f",&x[i]);

}


float sum=0;

for(int i=0; i<marco; i++)
sum = sum + x[i];

prom = sum/marco;

printf("tu promedio es %.2f\n",prom);


    return 0;
}
