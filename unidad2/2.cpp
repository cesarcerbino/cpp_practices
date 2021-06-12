/*
* Ingrese una fecha como 3 enteros para día, mes y año. Pase estos datos a una función que
* devuelva un entero que represente la misma fecha pero con formato AAAAMMDD.

* Variante: Ingrese los mismos datos pero de modo tal que el operador pueda ingresar en
* formato fecha, es decir, algo del estilo 25/5/2019.

* Nota: la variante indicada NO es importante desde el punto de vista del curso, es para quienes
* quieran profundizar un poco más en las particularidades de la biblioteca estándar de C++
*/

#include <iostream>
#include <string>

using namespace std;

int FormatDate(int day, int month, int year)
{
    int date = year * 1000 + month * 100 + day;
    return date;
}

int main()
{
    int day, month, year;
    cout << "ingrese el dia , el mes y el año: ";
    cin >> day;
    cin >> month;
    cin >> year;
    cout << FormatDate(day, month, year);
    return 0;
}

// mi variante =>
int FormatDateMia(int day, int month, int year)
{
    string dia, mes, anio;
    dia = to_string(day);
    mes = to_string(month);
    anio = to_string(year);
    int FormatedDate = stoi(anio + mes + dia);
    return FormatedDate;
}