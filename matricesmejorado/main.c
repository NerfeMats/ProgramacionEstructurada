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

void leerMatriz(int m[][COLUMNAS])   // persona que espera alguien quien es ese alguien: matriz bidimensional
{                                          // Para que espera a alguien, para hacer algun proceso
int fil, col;
for(fil=0;fil<FILAS;fil++)
    for(col=0; col< COLUMNAS ; col++)
    {
        printf("matriz[%d][%d]= ", fil, col);
    scanf("%d",&m[fil][col]);
    }


}

void sumarMatrices(int m[][COLUMNAS], int karen[][COLUMNAS], int resultado[][COLUMNAS])
{
int f, X;


for(f=0;f<FILAS;f++)
for(X=0;X<COLUMNAS;X++)
resultado[f][X] =m[f][X]+karen[f][X];

//imprimir(matrizR);
}

int main()
{

    int matriz[FILAS][COLUMNAS];
    int matriz1[FILAS][COLUMNAS];
    int matrizR[FILAS][COLUMNAS];


leerMatriz(matriz);   //funcion ya te mando a alguien: que cumpla las caracteristicas solicitadas
leerMatriz(matriz1);


sumarMatrices(matriz, matriz1, matrizR);


imprimir(matriz);
imprimir(matriz1);
printf("La suma de la matriz A y B es:\n");
imprimir(matrizR);


return 0;
}
