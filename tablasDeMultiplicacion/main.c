#include <stdio.h>
#include <stdlib.h>

void imprimirTabla(int); //se declara prototipo o la firma de la funcion
void marco(void);
void practicarTabla();
int main()
{
int tabla=2, opc;
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

                            //while(i<=10)
                            //{
                            //printf("%d*%d =%d\n",tabla,i,tabla*i);
                            //i=i+1;
                            //}
                        imprimirTabla(tabla);
                        tabla=tabla+1;
                        }

                    }

                 else if(opc==2)
                    practicarTabla();
                 else if(opc==3)
                 {


                     printf("Que tabla deseas estudiar: \n");
                     scanf("%d",&tabla);

                imprimirTabla(tabla);  // invocar <-> ven funcion
                marco();


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


void practicarTabla(){

int contador = 0, tabla,  i;
int resp;
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



void marco()
{
 int i=1;
  while(i<=5)
  {
  printf("saludos\n");
  i++;
  }
}

    //paso de valor por copia
                        //  el valor de tabla se copia en t
void imprimirTabla(int t) //definicion<->  que hara la funcion
{
    int i=1;
while(i<=10)
    {
    printf("%d*%d =%d\n",t,i,t*i);
    i=i+1;
    }
}
