/*
*   Desarrolle la función inversa a la anterior, dada una fecha como un entero con formato
*   AAAAMMDD separarla en sus componentes día, mes y año y mostrarla en la función main a partir
*   de estas variables, con formato día/mes/año.

?   Variante: haga los ajustes necesarios para mostrar el resultado con formato DD/MM/AAAA. Es
?   decir que agregue ceros de ser necesario para que muestre, por ejemplo, 01/02/2019 en lugar
?   de 1/2/2019.

?   Nota: la variante indicada NO es importante desde el punto de vista del curso, es para quienes
?   quieran profundizar un poco más en las particularidades de la biblioteca estándar de C++.
?   Pista: Usar #include <iomanip> y las funciones setw y setfill
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string ReverseDateVar(int ReverseDate)
{
    int year = ReverseDate / 10000;
    int monthday = ReverseDate - year * 10000;
    int month = monthday / 100;
    int day = monthday - month * 100;
    string Date;
    if (day / 10 == 0)
    {
        Date += "0" + to_string(day);
    }
    else
    {
        Date += "0" + to_string(day);
    }
    if (month / 10 == 0)
    {
        Date += "/0" + to_string(month);
    }
    else
    {
        Date += "/" + to_string(month);
    }
    Date += "/" + to_string(year);
    return Date;
}

//! se pueden usar parametros x referencia .
string ReverseDate(int ReverseDate)
{
    int year = ReverseDate / 10000;
    int monthday = ReverseDate - year * 10000;
    int month = monthday / 100;
    int day = monthday - month * 100;
    string Date = to_string(day) + "/" + to_string(month) + "/" + to_string(year);
    return Date;
}

int main()
{
    cout << "ReverseDate => " << ReverseDate(20200901) << endl;
    //cout << "ReverseDateVar => " << ReverseDateVar(20200901) << endl;
    return 0;
}
