/* 
* Ingresar dos valores enteros, el primero corresponde a la cantidad de bultos en stock y el
* segundo a la cantidad de bultos que se pueden colocar en una caja. Calcule cuantas cajas
* completas se pueden llenar con los bultos disponibles y cuantos bultos sueltos quedarían.
*/

#include <iostream>

using namespace std;

int main()
{
    int Cant_de_bultos, Cant_de_cajas, Cajas_Totales;
    cout << "ingrese la cantidad de bultos: \n";
    cin >> Cant_de_bultos;
    cout << "ingrese la cantidad de bultos por caja: \n";
    cin >> Cant_de_cajas;
    Cajas_Totales = Cant_de_bultos / Cant_de_cajas;
    cout << " la cantidad de cajas totales que se pueden llenar es: " << Cajas_Totales;

    return 0;
}