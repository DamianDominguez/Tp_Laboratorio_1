#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float suma(float numero1,float numero2)
{
    float suma=numero1+numero2;
    return suma;
}
float pedirNumero(char texto [])
{
    float numero;
    printf("%s",texto);
    scanf("%f",&numero);
    return numero;
}

/*void mostrarResultado(char texto[],float resultado)
{
    int entero;
    entero=verificarEntero(resultado);
    if(entero==1)
    {
        printf("%s%d\n",texto,(int)resultado);
    }
    else
    {
        printf("%s%f\n",texto,resultado);
    }
}
*/
float verificarEntero(float resultado)
{
    int entero;
    int verificador;
    verificador=(int)resultado;
    if(resultado-verificador==0)
    {
        entero=1;
    }
    else
    {
        entero=0;
    }
    return entero;
}

float resta(float numero1,float numero2)
{
    float resta=numero1-numero2;
    return resta;
}
float division(float numero1,float numero2)
{
    float cociente=numero1/numero2;
    return cociente;
}
float multiplicacion(float numero1,float numero2)
{
    float multiplicacion=numero1*numero2;
    return multiplicacion;
}
long long int factorial(int numero)
{
    long long int respuesta;
    if(numero==0)
    {
        return 1;
    }
    else
    {
        respuesta=numero*factorial(numero-1);
        return respuesta;
    }
}
float validarNum(int flagnum,char texto[])
{
    float numero1;
    if(flagnum==0)
    {
        numero1=pedirNumero(texto);
        flagnum=1;
    }
    return numero1;
}
