#include <stdio.h>
#include <stdlib.h>

#define FILAS 3
#define COLUMNAS 4

void imprimirT(int matriz[][FILAS])
{
int j, i;

for(j=0;j<COLUMNAS;j++)

    {

        for(i=0;i<FILAS;i++)
        printf("%d ", matriz[j][i]);


        printf("\n");

    }

}



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
printf("Ingresa tu matriz por filas y columnas\n");
printf("separa con un espacio los valores\n");
printf("Filas: %d, ", FILAS);
printf("Columnas: %d\n", COLUMNAS);

for(fil=0;fil<FILAS;fil++)
    for(col=0; col< COLUMNAS ; col++)
    {
       // printf("matriz[%d][%d]= ", fil, col);
    scanf("%d",&m[fil][col]);
    }


}

void sumarMatrices(int m[][COLUMNAS], int karen[][COLUMNAS], int resultado[][COLUMNAS])
{
int f, X;


for(f=0;f<FILAS;f++)
{


 for(X=0;X<COLUMNAS;X++)
 resultado[f][X]=m[f][X]+karen[f][X];
}

//printf("desde la funcion\n");
//imprimir(resultado);
//printf("******\n");
}

void restaMatrices(int m[][COLUMNAS], int karen[][COLUMNAS], int resultado[][COLUMNAS])
{
int f, X;


for(f=0;f<FILAS;f++)
{


 for(X=0;X<COLUMNAS;X++)
 resultado[f][X]=m[f][X]-karen[f][X];
}

//printf("desde la funcion\n");
//imprimir(resultado);
//printf("******\n");
}

void escalarPorMatriz(int k, int m[][COLUMNAS], int resultado[][COLUMNAS])
{
int f,c;
for(f=0; f<FILAS; f++)
{

for(c=0; c<COLUMNAS; c++)
resultado[f][c]=k*m[f][c];

}

//resultado[0][0] = k(m[0][0])
//resultado[0][1] = k(m[0][1])

}
                                                    //1           2
void intercambiodefilas(int m [ ] [COLUMNAS],int filaACam1, int filaACam2)
{
int k;
int respaldo;
for(k=0;k<COLUMNAS;k++)
{
respaldo=m[filaACam1][k];
m[filaACam1][k]=m[filaACam2][k];
m[filaACam2][k]=respaldo;

}


}

void transpuesta(int m[][COLUMNAS], int transpuesta[][FILAS]){
int i,j;
for(i=0;i<FILAS;i++)
    for(j=0;j<COLUMNAS;j++)
        transpuesta[j][i]=m[i][j];


}


int sumadeenteros(int a, int b)
{

printf("la suma de %d + %d es %d", a, b, a+b);
return a+b;
}


int main()
{
int k;
//int suma = sumadeenteros(5,4);
    int matriz[FILAS][COLUMNAS];
    int matriz1[FILAS][COLUMNAS];
    int matrizR[FILAS][COLUMNAS];
    int matrizR1[FILAS][COLUMNAS];
    int matrizXescalarR[FILAS][COLUMNAS];
    int transpuestaM[COLUMNAS][FILAS];


//printf("****%d\n",p);
leerMatriz(matriz);   //funcion ya te mando a alguien: que cumpla las caracteristicas solicitadas
leerMatriz(matriz1);

sumarMatrices(matriz,matriz1,matrizR);
restaMatrices(matriz,matriz1,matrizR1);
printf("dar el valor k");
scanf("%d",&k);
escalarPorMatriz(k,matriz1,matrizXescalarR);


imprimir(matriz);
imprimir(matriz1);
printf("_____________\n");

printf("La suma de la matriz A y B es:\n");
imprimir(matrizR);
printf("La resta de la matriz A y B es:\n");
imprimir(matrizR1);
intercambiodefilas(matriz1, 0, 2);

transpuesta(matriz1,transpuestaM);
imprimir(matriz1);

printf("_____trans\n");
imprimirT(transpuestaM);
printf("___\n");

printf("El producto de la matriz A por el escalar %i es:\n",k);
imprimir(matrizXescalarR);


return 0;
}
