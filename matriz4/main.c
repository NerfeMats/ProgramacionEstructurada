#include <stdio.h>
#include <stdlib.h>

#define FILAS 3
#define COLUMNAS 3


int main()
{   int i,j;
    /*int matriz[FILAS][COLUMNAS]={

    //c0   c1   c2
    {500, 20, -6}, // fila 0
    {-1, 1000, 40},// fila 1
    {30, 70, 100}   // fila 2
    };*/


    int matriz[FILAS][COLUMNAS], col, fil, f, X;
    int matriz1[FILAS][COLUMNAS];
    int matrizR[FILAS][COLUMNAS];
    for(fil=0;fil<FILAS;fil++)
    for(col=0; col< COLUMNAS ; col++)
    {
        printf("matriz[%d][%d]= ", fil, col);
    scanf("%d",&matriz[fil][col]);
    }

    for(fil=0;fil<FILAS;fil++)
    for(col=0; col< COLUMNAS ; col++)
    {
        printf("matriz1[%d][%d]= ", fil, col);
    scanf("%d",&matriz1[fil][col]);
    }


    for(f=0;f<FILAS;f++)
    for(X=0;X<COLUMNAS;X++)
    matrizR[f][X] =matriz1[f][X]+matriz[f][X];


    /*for(X=0;X<COLUMNAS;X++)
    matrizR[0][X] =matriz1[0][X]+matriz[0][X];

    for(X=0;X<COLUMNAS;X++)
    matrizR[1][X] =matriz1[1][X]+matriz[1][X];

    for(X=0;X<COLUMNAS;X++)
    matrizR[2][X] =matriz1[2][X]+matriz[2][X];

    matrizR[0][0] =matriz1[0][0]+matriz[0][0];
    matrizR[0][1] =matriz1[0][1]+matriz[0][1];
    matrizR[0][2] =matriz1[0][2]+matriz[0][2];

    matrizR[1][0] =matriz1[1][0]+matriz[1][0];
    matrizR[1][1] =matriz1[1][1]+matriz[1][1];
    matrizR[1][2] =matriz1[1][2]+matriz[1][2];

    matrizR[2][0] =matriz1[2][0]+matriz[2][0];
    matrizR[2][1] =matriz1[2][1]+matriz[2][1];
    matrizR[2][2] =matriz1[2][2]+matriz[2][2];

*/

   /* printf("ingresa valor en la pos 0 0");
    scanf("%d",&matriz[0][0]);

    printf("ingresa valor en la pos 0 1");
    scanf("%d",&matriz[0][1]);

    printf("ingresa valor en la pos 0 2");
    scanf("%d",&matriz[0][2]);

    */



    for(j=0;j<FILAS;j++)

{

        for(i=0;i<COLUMNAS;i++)
        printf("%d ", matriz[j][i]);


 printf("\n");

}

printf("La suma de la matriz A y B es:\n");

  for(j=0;j<FILAS;j++)

{

        for(i=0;i<COLUMNAS;i++)
        printf("%d ", matrizR[j][i]);


 printf("\n");

}



 /*printf("______________\n");
  for(i=0;i<COLUMNAS;i++)
  printf("%d ", matriz[0][i]);

 printf("\n");

   for(i=0;i<COLUMNAS;i++)
  printf("%d ", matriz[1][i]);

printf("\n");

   for(i=0;i<COLUMNAS;i++)
  printf("%d ", matriz[2][i]);
printf("\n");

printf("__________\n");

  //momento 1          f  c
  printf("%d ", matriz[0][0]);
  printf("%d ", matriz[0][1]);
  printf("%d ", matriz[0][2]);
printf("\n");

  //momento 2
    printf("%d ", matriz[1][0]);
    printf("%d ", matriz[1][1]);
    printf("%d ", matriz[1][2]);               //f  c
printf("\n");
    //momento 3
printf("%d ", matriz[2][0]);
printf("%d ", matriz[2][1]);
printf("%d ", matriz[2][2]);
*/
/*
//->columna
    0 1 2
//  a a a  0 ! filas
//  a a a  1
//  a a a  2
*/


    return 0;
}
