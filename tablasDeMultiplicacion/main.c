#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, tabla=2, opc;
printf("\n\n");

while(1)
{



printf("Programa para practicar las tablas de multiplicar\n");
printf("\t1. Mostrar todas las tablas\n");
printf("\t2. Estudiar alguna tabla\n");
printf("\t3. Practicar tabla\n");
printf("\t4. Problemas relacionas\n");

printf("cual es tu opcion? ");
scanf("%d",&opc);



 if(opc==1)
    {

        while(tabla<=10)
        {
            printf("tabla del %d\n",tabla);
            i=1;
            while(i<=10)
            {
            printf("%d*%d =%d\n",tabla,i,tabla*i);
            i=i+1;
            }

        tabla=tabla+1;
        }

    }

 else if(opc==2)
 {
    printf("estas en estudiar alguna tabla");
 }
 else if(opc==3)
 {
     printf("practicar");
 }

 else if(opc==4)
 {
    printf("problemas");
 }
 else
    printf("la opc no esta en el menu");





}



    return 0;
}
