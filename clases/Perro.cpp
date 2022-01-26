/**
 * @file Perro.cpp
 * @author adolfosonc
 * @brief 
 * @version 0.1
 * @date 2022-01-25
 * @copyright Copyright (c) 2022
 * 
 * clase que implementa la clase Perro.hpp
 * compilado: g++ Perro.cpp -o Perro
 */

//incluimos el fichero de cabecera
#include "Perro.hpp"

//constructor
Perro:: Perro(int initialAge) {
    cout << "creamos un perro." << endl;
    itsAge = initialAge;
}

//destructor
Perro:: ~Perro() {
    cout << "objeto destruido."<<endl;
}

/* la funcion principal, para crear un perro y 
le hace ladrar*/
int main() {
    bool test = false;

    Perro Canelo = Perro(5);

    Canelo.ladra();
    //imprimimos la edad del perro
    cout << "Canelo es un perro cuya edad es de: ";
    cout << Canelo.getAge() << " años \n";
    Canelo.ladra();

    //cambiamos la edad de canelo
    Canelo.setAge(7);
    cout << "ahora canelo tiene " << Canelo.getAge() << " años\n" << endl;

    return 0;
}

