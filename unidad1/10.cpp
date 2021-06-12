/*
* Ingresar un Nº entero cualquiera y determinar cuantas cifras tiene (todo en base 10)
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int numero;
    cout << "ingrese un numero: ";
    cin >> numero;
    for (int a = 1; a < numero; a++)
    {
        if (numero < pow(10, a))
        {
            cout << "el numero tiene : " << a << "cifras \n";
            break;
        }
    }
    return 0;
}