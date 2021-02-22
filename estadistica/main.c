#include <stdio.h>
#include <stdlib.h>
//solo esta para tres calificaciones
//si se quiere mejorar , se tiene que poner más variables
void head(){
printf("Programa para calcular el promedio de 6 calificaciones\n");
printf("proximamente mejorado\n");
}

int main()
{
//float x0, x1, x2, x3, x4, x5;
    //x[0], x[1], x[2],x[4],x[5]

//int y[50];
float x[6];
float prom;

head();

//int i=0;
//while(i<6)
for(int i=0 ; i<6 ; i=i+1)
{
printf("da tu  calificacion: x%d\n",i);
scanf("%f",&x[i]);
//i=i+1; // i++
}

/*printf("da tu  calificacion: x1\n");
scanf("%f",&x1);
printf("da tu  calificacion: x2\n");
scanf("%f",&x2);
printf("da tu  calificacion: x3\n");
scanf("%f",&x3);
printf("da tu  calificacion: x4\n");
scanf("%f",&x4);
printf("da tu  calificacion: x5\n");
scanf("%f",&x5);
printf("da tu  calificacion: x6\n");
scanf("%f",&x6);

prom = (x1+x2+x3+x4+x5+x6)/6;
*/
float sum=0;

for(int i=0; i<6; i++)
sum = sum + i;




prom = sum/6;
//algo + x[i];
//der(sum+x[i])   ->    izq (sum)
//  sum= 0    +   x[0]                   primera vez
//  sum=x[0]+x[1]               segunda vez
//  sum=(x[0]+x[1]) +x[2]   tercera vez
//  sum=(x[0]+x[1] +x[2])+x[3] cuarto vez


//0 + x[0]
//x[0]+x[1]
//(x[0]+x[1]) + x[2]
//( (x[0]+x[1]) + x[2] ) + x[3]
//( (x[0]+x[1]) + x[2] ) + x[3] ) + x[4]
//prom = (x[0]+x[1]+x[2]+x[3]+x[4]+x[5])/6.0;




printf("tu promedio es %.2f\n",prom);


    return 0;
}
