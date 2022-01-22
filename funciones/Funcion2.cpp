/* programa donde recogemos datos de la entrada de datos
  de stdin*/

using namespace std;
#include <iostream>

//declaracion de metodos a utilizar
int sumar(int, int);
int primerValor();
int segundoValor();

//metodo main
int main()
{

    cout << "inicio del programa suma " << endl;
    //declaramos las variables que seran enviados como parametros en la suma
    int val1, val2;
    //llamamos las funciones para  obtener los valors
    val1 = primerValor();
    val2 = segundoValor();

    //llamomos la funcion para realizar la suma
    int resultado = sumar(val1, val2);

    cout << "la suma de: " << val1 << " + " << val2 << endl;
    cout << "el resultado es: " << resultado << endl;

    return 0;
}

//funcion para hacer la suma de los valores ingresados
int sumar(int val1, int val2)
{
    return (val1 + val2); //hacemos la suma y la retornamos de una vez
}

//funcion para pedir el primer valor al usuario
int primerValor()
{
    int num1;
    cout << "ingresa el primer valor: ";
    cin >> num1;

    return num1;
}

//funcion para obtener el segundo valor
int segundoValor()
{
    int num2;
    cout << "ingresa el segundo valor: ";
    cin >> num2;

    return num2;
}
