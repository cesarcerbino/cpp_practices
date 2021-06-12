/*
* Dadas las medidas de dos ángulos de un triángulo, determinar la medida del tercero e informar
* el resultado. 
*/

#include <iostream>

using namespace std;

int main()
{
    int angulo1, angulo2, resultante;
    cout << "ingrese los 2 angulos del triangulo: \n";
    cin >> angulo1 >> angulo2;
    // se calcula el angulo resultante y se muestra
    resultante = 180 - angulo1 - angulo2;
    cout << "el angulo resultante es : " << resultante << "\n";
    return 0;
}