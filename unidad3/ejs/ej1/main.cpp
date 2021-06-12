// * Arme un programa que lea las cantidades enteras guardadas en un archivo.
// * Informe por  pantalla la cantidad de datos leídos, su sumatoria y el promedio
// * (con decimales).

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream archivo;
    archivo.open("01entrada.txt");
    if (!archivo)
    {
        cout << "Error al tratar de abrir el archivo";
        return 1;
    }

    int num, contador = 0, sumatoria = 0;
    while (archivo >> num)
    {
        contador++;
        cout << "Numero leido: " << num << endl;
        sumatoria += num;
    }
    float promedio = contador > 0 ? float(sumatoria) / contador : 0;

    cout << "cantidad de numeros leidos: " << contador << endl;
    cout << "la sumatoria es: " << sumatoria << endl;
    cout << "el promedio es : " << promedio << endl;

    archivo.close();
    return 0;
}