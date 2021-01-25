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

  /*  float var = 6.01;
    //printf("tam en bytes float %d\n", sizeof(double));
    int mivarIntera = var;
    //printf("tam en bytes int %d\n", sizeof(int));

    if(var-mivarIntera>0)
        printf("var tiene decimales");
    else
        printf("es un numero entero");


 *
 */



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
        float dosa = 2*a;



    if(discriminante>0  ) // si sin acento, sí con acento no es
        {
            raizcuadrada = sqrt(discriminante);
            x1=(-b+raizcuadrada)/dosa;
            x2=(-b-raizcuadrada)/dosa;
            printf("Tu raices son distintas: \n");
            int auxiliar2 = x2;
            int auxiliar = x1;         //x1 = 0.2   auxiliar = x1 = 0.2 => auxiliar = 0
                                       // x1 = 5.43   auxiliar = x1 = 5.43 => auxiliar = 5
                                       // * x1 = 10.0 auxiliar = x1 = 10.0 => auxiliar = 10
                                        //   x1 = 0.2 auxiliar = x1 = 0.2 => auxiliar = 0
                                        //    si (5.43 - 5) > 0 <=> .43 > 0 => 5.43 es flotante
                                        //    *si (10 - 10) > 0 <=> 0 > 0 => no se cumple el if y se va else
                                        //    si (0.2 - 0) > 0 <=> 0.2 > 0 => es flotante

            if(fabs(x1-auxiliar)>0 && fabs(x2-auxiliar2)>0)                  //fabs(-4) = 4 ; fabs(4) = 4 fabs(-0.2) = 0.2
            {
            printf("x1: %.2f\n", x1);
            printf("x2: %.2f\n", x2);
            }
            else
            {

            printf("x1: %d\n", auxiliar);
            printf("x2: %.2f\n", x2);
            }


        }
    else
        if(discriminante==0)// si no ocurre la condicion if , se descarta si ocurre
        {
            x1=-b/dosa;
            printf("Tu raices son iguales (dobles): \n");
            printf("x1: %f\n", x1);
        }

        else

        {
           float parteReal;
           float parteImg;
            printf("el discriminante es menor a cero\n");
            printf("no es posible calcular las raices reales, pero sí complejas\n");
            discriminante = -1*discriminante;
            raizcuadrada = sqrt(discriminante);

            parteReal = -b /dosa;
            parteImg = raizcuadrada / dosa;
            if(parteReal!=0)
            {
            printf("tu raiz compleja es %.2f +i%.2f\n", parteReal,parteImg);
            printf("tu raiz compleja es %.2f -i%.2f\n", parteReal,parteImg);
            }
            else
            {
            printf("tu raiz compleja es +i%.2f\n", parteImg);
            printf("tu raiz compleja es -i%.2f\n", parteImg);
            }
            // calcular las raices complejas
        }




    return 0;
}
