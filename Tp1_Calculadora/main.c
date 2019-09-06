#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
#include<ctype.h>
#include "libreria.h"
//librerias usadas y de mi propia libreria con mis propias funciones
int main()
{   //las variables utilizados  para hacer el programa de la calculadora
    char numero[50];
    char opciones;
    int a=0,b=0;
    int sumaTotal=0;//inicializo todo en 0 ,por si no cargan valores
    int restaTotal=0;
    int multiTotal=0;
    float cociente=0;
    double fact=0;
    double fact1=0;
    int validoNumeroA=0;
    int validoNumeroB=0;



    do{ // las opciones del menu de la calculadora
        system("COLOR 70");
        printf("***********CALCULADORA***********\n\n");
        printf("--------menu de opciones---------\n\n");
        printf("a-Ingresar los valores a operar\n");
        printf("b-Calcular todas las operaciones\n");
        printf("c-Mostrar resultados\n");
        printf("d-salir\n\n\n");
        printf("------___valores cargados___-----\n\n");
        printf("El primer operando A= %d \n\n",validoNumeroA);
        printf("El segundo operando B= %d \n\n",validoNumeroB);
        printf("---------------------------------\n\n");
        printf("Indique opcion\n\n");
        opciones=getchar();

        system("cls");//limpio la pantalla
        //en el "a" se hace el ingreso de los valores  que ingresa el usuario
    switch  (opciones) {
        case 'a':

            do{
                printf("Ingrese 1er numero\n\n");
                scanf("%s",numero);
                a=validarNumero(numero);
            }while(a==0);
            validoNumeroA=atoi(numero);
            system("cls");
            do{
                printf("Ingrese 2do numero\n\n");
                scanf("%s",numero);
                b=validarNumero(numero);
            }while(b==0);
            validoNumeroB=atoi(numero);

            system("cls");
            printf("\n\n\n\n");
            printf("Ir a la opcion  b para calcular las operaciones\n\n\n\n");
            system("pause");
        break;
        //en el b se hace el llamado de las operaciones q están en las funciones
        case 'b':


            sumaTotal=getIntSuma(validoNumeroA,validoNumeroB);
            restaTotal=getIntResta(validoNumeroA,validoNumeroB);
            multiTotal=getIntMultiplicacion(validoNumeroA,validoNumeroB);

            if (validoNumeroB!=0){
                cociente=getFloatDivision(validoNumeroA,validoNumeroB);
            }
            fact1=getDoubleFactorial(validoNumeroA);
            fact=getDoubleFactorial(validoNumeroB);
            printf("\n\n\n\n");
            printf("Ir a la opcion c para mostrar todos los resultados\n\n\n\n");
            system("pause");
            system("cls");
        break;
        //en el "c" devuelve los resultados
        case 'c':
            printf("el resultado de %d + %d  es: %d \n\n",validoNumeroA,validoNumeroB ,sumaTotal);
            printf("el resultado de %d - %d  es: %d \n\n",validoNumeroA,validoNumeroB,restaTotal);
            printf("el resultado de %d * %d  es: %d \n\n",validoNumeroA,validoNumeroB,multiTotal);
            if (validoNumeroB!=0){
                printf("el resultado de %d / %d  es: %.1f \n\n",validoNumeroA,validoNumeroB,cociente);
            }else {
                printf("Error, no es posible dividir por cero\n\n");
            }
            printf("el factorial 1nro : %1f , el factorial 2nro es: %1f \n\n",fact1,fact);
            system("pause");
            system("cls");
        break;
        //en el "d" es la salida,y  la salida esta  acompañado con un mensaje
        case 'd':
            printf("\n\n\n");
            printf("**********Fin de funciones**********\n\n\n\n");

        break;

        }
    }while(opciones!='d');

return 0;
}
