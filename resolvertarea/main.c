#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    printf("esta es una tarea\n");
    printf("ingresa tu edad: ");
    scanf("%d",&edad);
    printf("ingresaste la edad: %d\n", edad);


    if(edad>59)
    {
    printf("tu seras vacunado en Enero, Febrero y Marzo");
    printf("Por favor cuidate");
    }
    else if(edad>40)
    {
    printf("tu seras vacunado en Marzo, Abril y Mayo");
    printf("Por favor cuidate");
    }
    else if(edad>20)
    {
    printf("tu seras vacunado en Mayo, junio y julio");
    printf("Por favor cuidate");
    }
    else if(edad>10 )
    {
    printf("tu seras vacunado en Julio, Agosto y Septiembre");
    printf("Por favor cuidate");
    }
    else
        printf("no hay fecha");


    return 0;
}
