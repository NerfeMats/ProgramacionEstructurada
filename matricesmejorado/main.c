#include <stdio.h>
#include <stdlib.h>

#define FILAS 3
#define COLUMNAS 3


void imprimir(int matriz[][COLUMNAS])
{
int j, i;

for(j=0;j<FILAS;j++)

    {

        for(i=0;i<COLUMNAS;i++)
        printf("%d ", matriz[j][i]);


        printf("\n");

    }

}

void leerMatriz(int matriz[][COLUMNAS])
{
int fil, col;
for(fil=0;fil<FILAS;fil++)
    for(col=0; col< COLUMNAS ; col++)
    {
        printf("matriz[%d][%d]= ", fil, col);
    scanf("%d",&matriz[fil][col]);
    }


}


int main()
{
    /*int matriz[FILAS][COLUMNAS]={

    //c0   c1   c2
    {500, 20, -6}, // fila 0
    {-1, 1000, 40},// fila 1
    {30, 70, 100}   // fila 2
    };*/


    int matriz[FILAS][COLUMNAS], f, X;
    int matriz1[FILAS][COLUMNAS];
    int matrizR[FILAS][COLUMNAS];

leerMatriz(matriz);
leerMatriz(matriz1);
    for(f=0;f<FILAS;f++)
    for(X=0;X<COLUMNAS;X++)
    matrizR[f][X] =matriz1[f][X]+matriz[f][X];
imprimir(matriz);
imprimir(matriz1);
printf("La suma de la matriz A y B es:\n");
imprimir(matrizR);


    /*for(fil=0;fil<FILAS;fil++)
    for(col=0; col< COLUMNAS ; col++)
    {
        printf("matriz[%d][%d]= ", fil, col);
    scanf("%d",&matriz[fil][col]);
    }*/

   /* for(fil=0;fil<FILAS;fil++)
    for(col=0; col< COLUMNAS ; col++)
    {
        printf("matriz1[%d][%d]= ", fil, col);
    scanf("%d",&matriz1[fil][col]);
    }*/







/* este codigo de modelara con una funcion
for(j=0;j<FILAS;j++)

    {

        for(i=0;i<COLUMNAS;i++)
        printf("%d ", matriz[j][i]);


        printf("\n");

    }
 aqui termina el for



  for(j=0;j<FILAS;j++)

    {

        for(i=0;i<COLUMNAS;i++)
        printf("%d ", matrizR[j][i]);


        printf("\n");

    }
*/

print("%d", i )


    return 0;
}
