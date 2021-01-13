#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// a. Analisis de trabajo
//ecuaciones cuadraticas
//Problema  1. Encontrar raices * ax`2+bx +c = 0
//          2. Evaluar la ecuacion
               // x12= (-b +- sqrt(b'2 - 4ac))/(2a)
//          3. Verla el lado izq de la igualdad como funcion y evaluarla
//                f(x)=ax`2+bx +c
//          4. otro


// inputs entradas a, b y c
// outs salida x1, x2



int main()
{
    // que me gustaria programa
    float a,b;
    float c;
    float x1, x2;
    float raizcuadrada;
    printf("\n\n");
    printf("\t\tUniversidad Autonoma Metropolitana\n");
    printf("\t\tProgramacion Estructurada\n");
    printf("\t\tPrograma para encontrar raices de una ec. cuadratica\n");
    printf("\n\nIngresa tu ecuacion cuadratica: ax'2 + bx +c =0\n");

    //ingresar a float <-> f
    printf("\ningresa coeficiente cuadratico:\t\t");
    scanf("%f",&a);

    //ingresar b
    printf("ingresa coeficiente lineal:\t\t");
    scanf("%f",&b);

    //ingresar c
    printf("ingresa coeficiente independiente:\t");
    scanf("%f",&c);

    printf("la ecuacion que ingresaste es: %.2fx'2 + %fx +%f = 0\n", a,b,c);


    // aqui se utilizan los coeficientes en la formula general
        float discriminante = b*b-4*a*c;


    if(discriminante>0 /*&& discriminante<4*/ ) // si sin acento, sí con acento no es
    {
        raizcuadrada = sqrt(discriminante);
        x1=(-b+raizcuadrada)/(2*a);
        x2=(-b-raizcuadrada)/(2*a);
        printf("Tu raices son distintas: \n");
        printf("x1: %f\n", x1);
        printf("x2: %f\n", x2);
    }
    else
    {

        if(discriminante==0)// si no ocurre la condicion if , se descarta si ocurre
        {
            x1=-b/(2*a);
            printf("Tu raices son iguales: \n");
            printf("x1: %f\n", x1);
        }

        else

        {
            printf("el discriminante es menor a cero\n");
            printf("no es posible calcular las raices reales");
            // calcular las raices complejas


        }
    }



    return 0;
}
