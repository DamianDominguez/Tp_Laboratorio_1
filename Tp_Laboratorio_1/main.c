#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
     char seguir='s';
    int opcion=0;
    int flagNum1=0;
    int flagNum2=0;
    int flagSuma=0;
    int flagresta=0;
    int flagDivision=0;
    int flagMultiplicacion=0;
    int flagFactor=0;
    float numero1;
    float numero2;
    float sumatoria;
    float diferencia;
    float cociente;
    float producto;
    long long int factor;//me falta la mascara o nose porque la toma con un warning

    while(seguir=='s')
    {
        printf("Ingrese un numero para continuar: \n");
        if(flagNum1==0)//visto sin que el usuario cargara datos anteriormente
        {
            printf("1- Ingresar 1er operando (A=x)\n");
        }
        else
        {
            if(verificarEntero(numero1)==1)//en caso de que el numero 1 ya este cargado
            {
                printf("1- Ingresar 1er operando (A=%i)\n",(int)numero1);//sea entero
            }
            else
            {
                printf("1- Ingresar 1er operando (A=%f)\n",numero1);//sea decimal
            }
        }
        if (flagNum2==0)
        {
            printf("2- Ingresar 2do operando (B=y)\n");//si no se ingreso antes un numero2
        }
        else
        {
            if(verificarEntero(numero2)==1)
            {
                printf("2- Ingresar 2do operando (B=%d)\n",(int)numero2);//entero
            }
            else
            {
                printf("2- Ingresar 2do operando (B=%f)\n",numero2);//decimal
            }
        }
        if(flagSuma==0)
        {
            printf("3- Calcular la suma (A+B)\n");//primer vista de suma
        }
        else
        {
            if(verificarEntero(sumatoria)==1)
            {
                printf("3- Calcular la suma (%d)\n",(int)sumatoria);//resultado de suma si es entero
            }
            else
            {
                printf("3- Calcular la suma (%f)\n",sumatoria);//si es decimal
            }
        }
        if(flagresta==0)
        {
            printf("4- Calcular la resta (A-B)\n");//primer vista
        }
        else
        {
            if(verificarEntero(diferencia)==1)
            {
                printf("4- Calcular la resta (%d)\n",(int)diferencia);//entero
            }
            else
            {
                printf("4- Calcular la resta (%f)\n",diferencia);//decimal
            }
        }
        if(flagDivision==0)
        {
            printf("5- Calcular la division (A/B)\n");//primer vista
        }
        else
        {
            if(verificarEntero(cociente)==1)
            {
                printf("5- Calcular la division (%d)\n",(int)cociente);//entero
            }
            else
            {
                printf("5- Calcular la division (%f)\n",cociente);//decimal
            }
        }
        if(flagMultiplicacion==0)
        {
            printf("6- Calcular la multiplicacion (A*B)\n");//primer vista
        }
        else
        {
            if(verificarEntero(producto)==1)
            {
                printf("6- Calcular la multiplicacion (%d)\n",(int)producto);//entero
            }
            else
            {
                printf("6- Calcular la multiplicacion (%f)\n",producto);//decimal
            }
        }
        if(flagFactor==0)
        {
            printf("7- Calcular el factorial (A!)\n");//primer vista
        }
        else
        {
           printf("7- Calcular el factorial (%lld)\n",factor);//despues de ingresar 8
        }
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1://pide numero1
                system("cls");
                numero1=pedirNumero("Ingrese primer operando: ");
             // mostrarResultado("numero 1: ",numero1);
                flagNum1=1;//anula la primer vista de suma
                flagSuma=0;
                flagresta=0;
                flagDivision=0;
                flagMultiplicacion=0;
                flagFactor=0;
                system("cls");
                break;
            case 2://pide numero2
                system("cls");
                numero2=pedirNumero("Ingrese segundo operando: ");
             // mostrarResultado("numero 2: ",numero2);
                flagNum2=1;
                flagresta=0;
                flagDivision=0;
                flagMultiplicacion=0;
                flagFactor=0;
                system("cls");
                break;
            case 3://suma
                system("cls");
                if(flagNum1==0)//pide en numero1 si aun no fue ingresado
                {
                    numero1=validarNum(flagNum1,"Ingrese primer operando: ");
                    flagNum1=1;
                }
                if(flagNum2==0)//pide numero 2 si aun no fue ingresado
                {
                    numero2=validarNum(flagNum2,"Ingrese segundo operando: ");
                    flagNum2=1;
                }
                sumatoria=suma(numero1,numero2);
                flagSuma=1;
                system("cls");
                break;
            case 4://resta
                system("cls");
                if(flagNum1==0)
                {
                    numero1=validarNum(flagNum1,"Ingrese primer operando: ");//pide numero1 si aun no fue ingresado
                    flagNum1=1;
                }
                if(flagNum2==0)//pide numero2 si aun no fue ingresado
                {
                    numero2=validarNum(flagNum2,"Ingrese segundo operando: ");
                    flagNum2=1;
                }
                diferencia=resta(numero1,numero2);
                flagresta=1;
                system("cls");
                break;
            case 5:
                system("cls");
                if(flagNum1==0)//pide numero1 si aun no fue ingresado
                {
                    numero1=validarNum(flagNum1,"Ingrese primer operando: ");
                    flagNum1=1;
                }
                if(flagNum2==0)//pide numero2 si aun no fue ingresado
                {
                    numero2=validarNum(flagNum2,"Ingrese segundo operando: ");
                    flagNum2=1;
                }
                while(numero2==0)//el divisor no puede ser cero
                {
                    numero2=pedirNumero("Ingrese segundo operando distinto a 0 para dividir: ");
                    flagSuma=0;
                    flagresta=0;
                    flagMultiplicacion=0;
                    flagFactor=0;
                }
                cociente=division(numero1,numero2);
                flagDivision=1;
                system("cls");
                break;
            case 6:
                system("cls");
                if(flagNum1==0)//pide numero1 si aun no fue ingresado
                {
                    numero1=validarNum(flagNum1,"Ingrese primer operando: ");
                    flagNum1=1;
                }
                if(flagNum2==0)//pide numero2 si aun no fue ingresado
                {
                    numero2=validarNum(flagNum2,"Ingrese segundo operando: ");
                    flagNum2=1;
                }
                producto=multiplicacion(numero1,numero2);
                flagMultiplicacion=1;
                system("cls");
                break;
            case 7:
                system("cls");
                if(flagNum1==0)//pide numero1 si aun no fue ingresado
                {
                    numero1=validarNum(flagNum1,"Ingrese primer operando: ");
                    flagNum1=1;
                }
                while(numero1<0||numero1>20||verificarEntero(numero1)!=1)
                {//valida que sea entre 0 y 20 y que sea entero
                    numero1=pedirNumero("Ingrese primer operando entero, entre 0-20: ");
                    flagSuma=0;
                    flagresta=0;
                    flagDivision=0;
                    flagMultiplicacion=0;
                }
                factor=factorial((int)numero1);
                flagFactor=1;
                system("cls");
                break;
            case 8:
                system("cls");
                if(flagNum1==0)//pide numero1 si aun no fue ingresado
                {
                    numero1=validarNum(flagNum1,"Ingrese primer operando: ");
                    flagNum1=1;
                }
                if(flagNum2==0)//pide numero2 si aun no fue ingresado
                {
                    numero2=validarNum(flagNum2,"Ingrese segundo operando: ");
                    flagNum2=1;
                }
                while(numero1<0||numero1>20||verificarEntero(numero1)!=1)
                {//valida que sea entre 0 y 20 y que sea entero
                    numero1=pedirNumero("Ingrese primer operando entero, mayor a 0 y menor a 21: ");
                    flagSuma=0;
                    flagresta=0;
                    flagDivision=0;
                    flagMultiplicacion=0;
                }
                while(numero2==0)//no es posible dividir por 0
                {
                    numero2=pedirNumero("Ingrese segundo operando distinto a 0 para dividir: ");
                    flagSuma=0;
                    flagresta=0;
                    flagMultiplicacion=0;
                    flagFactor=0;
                }
                sumatoria=suma(numero1,numero2);
                flagSuma=1;
                diferencia=resta(numero1,numero2);
                flagresta=1;
                producto=multiplicacion(numero1,numero2);
                flagMultiplicacion=1;
                cociente=division(numero1,numero2);
                flagDivision=1;
                factor=factorial((int)numero1);
                flagFactor=1;
                system("cls");
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }
    return 0;
}
}
