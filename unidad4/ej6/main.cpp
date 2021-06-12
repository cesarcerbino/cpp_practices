

#include <iostream>
#include <fstream>

using namespace std;

int valorMinimo(int vector[], int dim);

int main()
{
    ifstream archval;
    archval.open("datosG04E06-dos.txt");
    if (!archval)
    {
        cout << "Error al tratar de abrir el archivo";
        return 1;
    }
    else
    {
        archval.seekg(0, ios::end);
        if (archval.tellg() == 0)
        {
            cout << "Error: Archivo vacio";
            return 1;
        }
        else
        {
            archval.seekg(0);
        }
    }
    const int dim{10};
    int valores[dim];
    for (int i = 0; i < dim && archval >> valores[i]; i++)
    {
    }
    int pos = valorMinimo(valores, dim);
    cout << "el valor minimo es: " << valores[pos] << " y su posicion es : " << pos + 1;
    return 0;
}

int valorMinimo(int vector[], int dim)
{
    int minimo{0}, posicion{0};
    minimo = vector[0];
    for (int i = 1; i < dim; i++)
    {
        if (minimo > vector[i])
        {
            minimo = vector[i];
            posicion = i;
        }
    }
    return posicion;
}