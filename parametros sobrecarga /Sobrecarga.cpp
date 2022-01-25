/**
 * @file Sobrecarga.cpp
 * @author adolfosonc
 * @brief 
 * @version 0.1
 * @date 2022-01-24
 * 
 * @copyright Copyright (c) 2022
 * la sobrecarga es otro concepto basico en la POO.
 * Es una misma funcion con distintos parametros, con la sobrecarga
 * podemos lograr el polimorfismo de clases y funciones
 * compilado: g++ Sobrecarga.cpp -o Sobrecarga
 */

 using namespace std;
 #include <iostream>

 //declaramos las funciones antes de invocarlas
 double calcular(double a, double b);
 int calcular(int a, int b);
 float calcular(float a, float b);

 //el valor por defecto solo se pone en la declaracion 
 void imprimir(const char *mensaje = "sin valor prefijado ");
 

 //variables globales
 long variable = 2;
 const char *PROGRAMA = "Globales> ";

 int main () {
     imprimir(" vamos a probar los operadores ");
     //llamamos la funcion sin parametros
     imprimir();

     
     //llamada calcular con parametros double
     double r = 0, l = 5, m = 2;
     r = calcular(l, m);
     cout << "el resultado de la funcion: " << r << endl;

     //llamada de calcular con parametros float
     float z = 5, x = 2,  y = 0;
     y = calcular(x, z);
     cout << "el resultado de la funcion: " << y << endl;

     //llamada de calcular con parametros int
     int a = 5, b = 2,  d = 0;
     d = calcular(a, b);
     cout << "el resultado de la funcion: " << d << endl;

     imprimir("fin");

     return 0;
 }

 /* funcion calcular con parametros double y devuelve double */
 double calcular(double a, double b) {
     return (a / b) * variable;
 }

 /* funcion calcular con parametros float y devuelve float */
 float calcular(float a, float b) {
     return (a / b) * variable;
 }

/* funcion calcular con parametros int y devuelbe int */
 int calcular(int a, int b) {
     return (a / b) * variable;
 }

//funcion imprimir
void imprimir(const char *mensaje) {
    cout << PROGRAMA << mensaje << endl;
}



 