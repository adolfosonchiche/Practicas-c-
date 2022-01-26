/* Clase Perro.hpp utilizando metodos o funciones Setter / Getter
* vamos a definir estas funciones como inline
* cabecera de la clase Perro
*/

using namespace std;
#include <iostream>

class Perro {

    public:
        Perro(int initialAge);
        ~Perro(); //destructor

        int getAge() { return itsAge; } //inline? metodo getter
        void setAge(int age) { itsAge = age; } //inline metodo setter
        void ladra() { cout << "Guau guau arrr..." << endl; } //inline

    private:

        int itsAge;
};
