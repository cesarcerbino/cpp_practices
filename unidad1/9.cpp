/*
* Ingresar 3 valores enteros, escribirlos primero en el orden que fueron ingresados y luego
* mostrarlos ordenardos en forma creciente. 
*/

#include <iostream>

using namespace std;

int main()
{
    int numeros[3], aux;
    for (int a = 0; a < 3; a++)
    {
        cout << "ingrese un numero: ";
        cin >> numeros[a];
    }
    cout << "Ingresaste los numeros en el siguiente orden : " << numeros[0] << numeros[1] << numeros[2] << endl;
    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 3; b++)
        {
            if (numeros[a] < numeros[b])
            {
                aux = numeros[a];
                numeros[a] = numeros[b];
                numeros[b] = aux;
            }
        }
    }
    cout << "los numeros ordenenados : " << numeros[0] << numeros[1] << numeros[2];
    return 0;
}