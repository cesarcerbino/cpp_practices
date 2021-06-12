/*
* Ingresar dos valores distintos en dos Variables a y b, luego el valor ingresado en a pasarlo a b
* y el valor Ingresado en b, Pasarlo a a y mostrarlos.
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "ingrese 2 valores distintos: \n";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << " " << b;
    system("pause");
}
