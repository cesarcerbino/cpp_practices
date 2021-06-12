/*
* Desarrolle una función que reciba un año como parámetro y devuelva verdadero si es bisiesto.
* Nota: los años bisiestos son aquellos que son divisibles por 4 pero no por 100, salvo que
* también sean divisibles por 400.
*/

#include <iostream>

using namespace std;

bool YearCalculator(int Year)
{
    if (Year % 4 == 0 && (Year % 100 != 0 || Year % 400 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int Year;
    cout << "Ingrese un año: ";
    cin >> Year;
    if (YearCalculator(Year))
    {
        cout << "El año" << Year << "es bisiesto";
    }
    else
    {
        cout << "El año" << Year << "no es bisiesto";
    }
    return 0;
}