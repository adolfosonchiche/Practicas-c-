/** @file Coche.cpp
* @author adolfosonc
* @brief 
* @version 0.1
* @date 2022-01-25 
* este seria el fichero de implementacion de del fichero Coche.hpp
* comilar: g++ Coche.cpp -o Coche
*/

//incluimos el fichero de cabecera 
#include "Coche.hpp"

//implementamos el constructor
Coche::Coche () {
    cout << "coche creado." << endl;
}

//implementacion de constructor con sobrecarga
Coche::Coche(char *m, int cil, int cab) {
    cout << m << " " << cil << " " << cab << endl;
}

//implementacion de metodos
void Coche:: arrancar() {
    cout << "arrancando el coche." << endl;
}

void Coche:: detener() {
    cout << "deteniendo el coche." << endl;
}

void Coche:: acelerar() {
    cout << "acelerando el coche." << endl;
}

//destructor, util para liberar memoria

Coche::~Coche() {
    cout << "coche destruido." << endl;
}

int main() {

    Coche coche1 = Coche();
    coche1.acelerar();
    coche1.detener();
    return 0;

}