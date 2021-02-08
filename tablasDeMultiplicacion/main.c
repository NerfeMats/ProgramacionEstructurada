#include <stdio.h>
#include <stdlib.h>


void imprimirTabla(int t)
{
 /*
 while(i<=10)
    {
    printf("%d*%d =%d\n",tabla,i,tabla*i);
    i=i+1;
    }*/
}

int main()
{
int i, tabla=2, opc, resp, contador;
printf("\n\n");



while(1)
{

                printf("Programa para practicar las tablas de multiplicar\n");
                printf("\t1. Mostrar todas las tablas\n");
                printf("\t2. Practicar alguna tabla\n");
                printf("\t3. Estudiar tabla\n");
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
                    contador = 0;
                    printf("estas en practicar alguna tabla\n");
                    printf("cual tabla deseas practicar: ");
                    scanf("%d",&tabla);
                    i=1;
                            while(i<=10)
                            {
                            printf("%d*%d = ",tabla,i);
                            scanf("%d",&resp);
                            if(resp== tabla*i)
                               {
                                printf("bien\n");
                                contador++;
                               }
                            else
                                printf("mal\n");

                            i=i+1;
                            }
                            printf("tus aciertos son: %d\n", contador);
                            printf("tus errores son: %d\n",10-contador);

                 }
                 else if(opc==3)
                 {
                     i=1;
                     printf("estudiar");
                     printf("Que tabla deseas estudiar: ");
                     scanf("%d",&tabla);

                     imprimirTabla(tabla);



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
