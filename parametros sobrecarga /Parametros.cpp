/* programa para los parametros delas funciones y la forma de aplicar
valores por defecto
compilar: g++ Parametros.cpp -o Parametros
ejecutar: ./Parametros
*/

using namespace std;
#include <iostream>

//las funciones que vamos a utilizar las debemos de declarar 
//antes de invocar
double calcular(double a, double b);
void imprimir(const char *mensaje = "sin valor prefijado");
int sumar(int a = 0, int b = 0, int c = 0);

//declaramos variables globales
long variab = 678;
const char *PROGRAMA = "Globales ";

int main() {
    //imprimimos por salida estandar un mensaje
    imprimir("vamos a probar los operadores");
    
    //hacemos una llamada sin parametro
    imprimir();

    unsigned int test = 0;
    int a = 23, b = 21, c = 34, d = 0;

    //llamada de funcion sumar sin parametros
    d = sumar();

    cout << " el resultado de la funcion suma sin parametros es: " << d << endl;

    //llamada con parametros
    d = sumar(a, b, c);
    cout << "el resultado de la funcion suma es : " << d << endl;

    //imprimimos un mensaje
    imprimir("fin del programa");

    return 0; 
}

//funcion calcula
double calcular(double a, double b) {
    return (a / b) * variab;
}

//imprimir
void imprimir(const char * mensaje) {
    cout << PROGRAMA << mensaje << endl;
}

//sumar
int sumar(int a, int b, int c) {
    imprimir("estamos en la funcion suma ");

    return (a + b + c);
}