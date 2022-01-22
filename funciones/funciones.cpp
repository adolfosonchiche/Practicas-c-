/*  en este progrma se crean funciones que se llaman en otra
y la principal se llama en el main para ejecutarlos */

/* para compilar el archivo se ejecuta:
    g++ funciones.cpp -o funciones
    y para ejecutarlo:
    ./funciones
*/

using namespace std;
#include <iostream>

//declaramos el metodo que sera de tipo void para poder utilizarlo despues
void imprimirMensaje();

//funcion principal
int main()
{
    cout << "vamos a llamar a una funcion..." << endl;
    //llamamos una funcion
    imprimirMensaje();

    return 0;
}

//funcion suma que recibe parametros y retorna un resultado
int suma(int num1, int num2)
{
    return (num1 + num2);
}

//funcion o metodo que no retorna nada
void imprimirMensaje()
{

    cout << " estamos en la funcion imprimir mensaje y llamaremos la funcion suma" << endl;
    //vamos a llamar la funcion suma aqui y le eviamos 2 valores
    //para que los sume y retorne un resultado para guardarlo y despues imprimir
    cout << "valores a sumar : 10 + 20 " << endl;
    int resultado = suma(10, 20);
    cout << "el resultado es : " << resultado << endl;

    //llamamos la funcion suma e imprimimos el resultado de una vez desde el output
    cout << " valores a sumar: 5 + 12 " << endl;
    cout << "el resultado de la suma es: " << suma(5, 12) << endl;
    cout << "programa terminado." << endl;
}
