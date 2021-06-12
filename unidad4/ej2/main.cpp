// * Dado un vector de double, armar una función que devuelva el promedio de
// * aquellos valores que superen una determinado parámetro
// * (que se pasará a la función). Si usa el archivo datosG04E02.txt el vector
// * debe tener 7 elementos y estos son algunas resultados:

#include <iostream>
#include <fstream>

using namespace std;

double prom(double valores[], int dim, int valor);

int main()
{
    ifstream Notas;
    Notas.open("datosG04E02.txt");
    if (!Notas)
    {
        cout << "Error al tratar de abrir el archivo";
        return 1;
    }
    else
    {
        Notas.seekg(0, ios::end);
        if (Notas.tellg() == 0)
        {
            cout << "Error: Archivo vacio";
            return 1;
        }
        else
        {
            Notas.seekg(0);
        }
    }
    const int dim{7};
    double valores[dim];
    for (int i = 0; Notas >> valores[i]; i++)
    {
    }
    int valor;
    cout << "ingrese el numero a superar : ";
    cin >> valor;
    cout << "el promedio es : " << prom(valores, dim, valor);
    return 0;
}

// ! Funciones

double prom(double valores[], int dim, int valor)
{
    double prom{0};
    int cant{0};
    for (int a = 0; a < dim; a++)
    {
        if (valores[a] > valor)
        {
            cant++;
            prom += valores[a];
        }
    }
    return prom / cant;
}