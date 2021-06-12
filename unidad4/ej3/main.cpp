// * Cargar un vector con los promedios anuales (pueden tener decimales) de las
// *  notas de 10 alumnos. Informe el promedio de todas esas notas
// * (calculado por una función) y cuantos alumnos estuvieron por encima del promedio
// * (calculado por otra función). Si lee del archivo datosG04E03.txt el promedio es
// * 7,792 y la cantidad de alumnos que superan el promedio es 5

#include <iostream>
#include <fstream>

using namespace std;

double promCalculator(double vector[], int dim);
int overProm(double prom, double vector[], int dim);
int main()
{
    ifstream Notas;
    Notas.open("datosG04E03.txt");
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
    const int dim{10};
    double valores[dim];
    for (int i = 0; i < dim; i++)
    {
        Notas >> valores[i];
    }
    double promedio = promCalculator(valores, dim);
    cout << "el promedio es: " << promedio << endl;
    cout << "la cantidad de notas superiores al prmedio es : " << overProm(promedio, valores, dim);
    return 0;
}

double promCalculator(double vector[], int dim)
{
    double sumatoria{0};
    int cant{0};
    for (int i = 0; i < dim; i++)
    {
        sumatoria += vector[i];
    }
    return sumatoria / dim;
}

int overProm(double prom, double vector[], int dim)
{
    int cantidad{0};
    for (int i = 0; i < dim; i++)
    {
        vector[i] > prom ? cantidad++ : cantidad;
    }
    return cantidad;
}