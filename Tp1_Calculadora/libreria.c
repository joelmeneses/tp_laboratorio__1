#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
#include<ctype.h>
#include "libreria.h"



/** \brief recibe un string,y verifica si son caracteres ,y si esta en el rango de numeros
 *
 * \param  int i un contador
 * \param  int b un contador
 * \return un booleano , luego cumplir la condicion if..
 *
 */

int validarNumero(char numero[]){

   int  i=0;
   int  b=0;


while (numero[i]!='\0' ){
        if (numero[i]>='0' && numero[i]<='9' ) {
            i++;
        }else if (numero[i]=='-' && i==0 ) {
            i++;
        }else if (numero[i]==',' && b == 0){
            b=1;
            i++;
        }else {
            return 0 ;
            }
        }
   return 1;
}


/** \brief realiza suma de dos enteros ingresados
 *
 * \param ingresa el primer entero a
 * \param ingresa el segundo entero b
 * \return el resultado de la suma de los dos enteros
 *
 */


int getIntSuma(int a ,int b){
    int sumaTotal;

    sumaTotal=a +b;
return sumaTotal;
}

/** \brief realiza la resta de dos enteros ingresados
 *
 * \param ingresa el primer entero a
 * \param ingresa el segundo entero b
 * \return el resultado de la resta de los dos enteros
 *
 */

int getIntResta(int a , int b) {
    int restaTotal;
    restaTotal=a-b;
return restaTotal;

}

/** \brief realiza la multiplicacion de dos enteros ingresados
 *
 * \param ingresa el primer entero a
 * \param ingresa el segundo entero b
 * \return el resultado de la multiplicacion  de los dos enteros
 *
 */


int getIntMultiplicacion(int a,int b){
    int MultiTotal;

    MultiTotal=a*b;

return MultiTotal;
}

/** \brief realiza la division de dos enteros ingresados
 *
 * \param ingresa el primer entero a
 * \param ingresa el segundo entero b
 * \return resultado de la operacion division, casteado por si resultado es con decimal
 *
 */

float getFloatDivision(int a ,int b) {


    float cociente;
    cociente=(float) a/b;
return cociente;
}

/** \brief realiza el factorial de un entero ingresado (Funcion directa)
 *
 * \param  double "rta" para almacenar el dato del factorial y tener mas precision a la hora del resultado;
 * \param  rta , lo inicializo en 1 , ya q el factorial de 0 es 1;
 * \return resultado factorial del numero, luego de una condicion if .(retorna un double)
 *
 */

 double getDoubleFactorial(int a) {

    double rta ;

    if (a == 0){
        rta=1;

    }else{
        rta= a * getDoubleFactorial(a-1);
    }
return rta ;
}








