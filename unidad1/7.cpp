/*
* Leer 2 valores y mostrar el mayor de ellos, si son iguales mostrar cualquiera de los dos
*/

#include <iostream>

using namespace std;

int main()
{
    int valor1, valor2;
    cout << "ingrese dos numeros : \n";
    cin >> valor1 >> valor2;
    valor1 >= valor2 ? cout << "el valor: " << valor1 << "es mayor " : cout << "el valor: " << valor2 << "es mayor ";
    system("pause");
}