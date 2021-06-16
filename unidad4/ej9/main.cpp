// * ingrese en un vector 10 enteros. Muéstrelos en el orden ingresado.
// * Ordénelos  en forma ascendente y muéstrelos ordenados

#include <iostream>

using namespace std;

void mostrar(int vector[], int dim);
void ordenar(int vector[], int dim);
void carga(int vector[], int dim);

int main()
{
    const int dim = 10;
    int vector[dim]{0};

    carga(vector, dim);
    cout << "el vector fue ingresado de la siguente manera: " << endl;
    mostrar(vector, dim);
    ordenar(vector, dim);
    cout << "===============================================" << endl;
    cout << "el vector ordenado queda de la siguente manera: " << endl;
    mostrar(vector, dim);
    return 0;
}

void ordenar(int vector[], int dim)
{
    int i, pos, imin, temp;

    for (pos = 0; pos < dim - 1; pos++)
    {
        imin = pos;
        for (i = pos + 1; i < dim; i++)
            if (vector[i] < vector[imin])
                imin = i;
        temp = vector[pos];
        vector[pos] = vector[imin];
        vector[imin] = temp;
    }
}

void carga(int vector[], int dim)
{
    int val;
    for (int i = 0; i < dim; i++)
    {
        cout << "ingrese un valor : ";
        cin >> val;
        vector[i] = val;
    }
}

void mostrar(int vector[], int dim)
{
    for (int a = 0; a < dim; a++)
    {
        cout << "posicion: " << a << " Valor: " << vector[a] << endl;
    }
}