/** @file Loop.cpp
* @author adolfosonc
* @brief 
* @version 0.1
* @date 2022-01-31 
* comilar: g++ Loop.cpp -o Loop
*/

using namespace std;
#include <iostream>

//programa principal
int main () {
    cout << " vamos a mostrar un loop " << endl;

    //inicializamos variables
    int i = 0;
    int max = 0;

    //pedimos el total de iteraciones al usuario
    cout << "cuantas vualtas damos ? ";
    cin >> max;

    //vamos a implementar una iteracion con etiquetas
    //en general no  es recomendable usar etiquetas
    bucle: i++;
    cout << "contador: " << i << endl;

    if (i < max)
        goto bucle;

    //fin del programa
    cout << "\nfin del programa" <<endl;
    return 0;
    
}