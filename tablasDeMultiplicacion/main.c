#include <stdio.h>
#include <stdlib.h>

void imprimirTabla(int); //se declara prototipo o la firma de la funcion
void marco(void);
void practicarTabla();
void mostrarTodasTablas();
void tablaAEstudiar();




int menu(){
    int opc;
                printf("Programa para practicar las tablas de multiplicar\n");
                printf("\t1. Mostrar todas las tablas\n");
                printf("\t2. Practicar alguna tabla\n");
                printf("\t3. Estudiar tabla\n");
                printf("\t4. Problemas relacionas\n");
                printf("\t0 para terminar con la ejecución\n");

                printf("cual es tu opcion? ");
                scanf("%d",&opc);
 return opc;
}

int main()
{
int opc;
printf("\n\n");



while(1)
{
                opc=menu();
                if(opc==1)
                    mostrarTodasTablas();

                 else if(opc==2)
                    practicarTabla();

                 else if(opc==3)
                 tablaAEstudiar();

                 else if(opc==4)
                    printf("problemas");

                 else if(opc==0)
                    break;
                 else
                    printf("la opc no esta en el menu");
}

printf("saliendo...");

    return 0;
}

void tablaAEstudiar(){
int tabla;
printf("Que tabla deseas estudiar: \n");
    scanf("%d",&tabla);

    imprimirTabla(tabla);  // invocar <-> ven funcion
                //marco();



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


void mostrarTodasTablas(){
int tabla=2;
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
