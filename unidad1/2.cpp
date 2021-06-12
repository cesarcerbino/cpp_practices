/*
* Dado un Nº del 1 al 7 determinar (mostrar) el nombre del día de la semana que corresponde. Si
* el nro está fuera de rango infórmelo como un error de ingreso de datos
*/

#include <iostream>

using namespace std;

int main()
{
    int dia;
    cout << "Ingrese un numero del 1 al 7 : \n";
    cin >> dia;
    switch (dia)
    {
    case 1:
        cout << "es lunes";
        break;
    case 2:
        cout << "es martes";
        break;
    case 3:
        cout << "es miercoles";
        break;
    case 4:
        cout << "es jueves";
        break;
    case 5:
        cout << "es viernes";
        break;
    case 6:
        cout << "es sabado";
        break;
    case 7:
        cout << "es domingo";
        break;
    default:
        cout << "ingreso un numero mayor a 7";
        break;
    }
    system("pause");
}
