//programa que muestra los tipos de datos y el tamaño de cada uno

using namespace std;
#include <iostream>
//constantes definicion
#define MEMOLA 3

int main()
{
    //imprimimos el tamaño de cada tipo de datos basicos
    cout << "el tamaño del int es: \t" << sizeof(int) << " bytes.\n";
    cout << "el tamaño del short es: \t" << sizeof(short) << " bytes.\n";
    cout << "el tamaño del long es: \t" << sizeof(long) << " bytes.\n";
    cout << "el tamaño del char es: \t" << sizeof(char) << " bytes.\n";
    cout << "el tamaño del float es: \t" << sizeof(float) << " bytes.\n";
    cout << "el tamaño del double es: \t" << sizeof(double) << " bytes.\n";

    //definicion de constantes
    const float PI = 3.1416;
    cout << "ten fe en el caos " << PI << endl;
    cout << "\n termino el programa :" << MEMOLA << endl;

    return 0;
}
