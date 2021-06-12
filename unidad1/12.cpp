/*
* 12. Ingresar un Nº cualquiera y determinar si es positivo o no. Repetir en un ciclo hasta que el nro
* ingresado sea cero. Nota: utilice el operador ?(condicion ? true : false):
*   1. Variante a: considere el cero como positivo
*   2. Variante b: En caso de ingresar cero no emita ningún mensaje, simplemente finalice el programa
*/

#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout << "ingrese un numero : ";
    cin >> numero;
    while (numero != 0)
    {
        numero >= 0 ? cout << "el numero es positivo" : cout << "el numero es negativo";
        cout << "ingrese un numero : ";
        cin >> numero;
    }

    return 0;
}