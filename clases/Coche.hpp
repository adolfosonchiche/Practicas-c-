/* una clase en c++ es la representacion de un objeto 
* este es un fichero de cabeceras para tener orden en el codigo
* tiene extencion .hpp y la implementacion se especifica en un fichero
* cpp, tambien podemos tener metodo constructores y destructores
* Este archivo no se compila hasta en la implementacion
*/

using namespace std;
#include <iostream>

class Coche {
    public:

    Coche();

    Coche(char *m, int cil, int cab);

    ~Coche(); //destructor

    void arrancar();
    void detener();
    void acelerar();

    private:

    char *marca;
    int cilindro;
    int caballos;
};
