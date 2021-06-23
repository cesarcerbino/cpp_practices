// * Se carga un vector con 8 elementos enteros. Estos valores representan el
// * puntaje obtenido en un campeonato por los equipos que participan.
// * En la posición de subíndice i se encuentra el puntaje del equipo al que se
// * dio el código i. Informe la tabla de posiciones, ordenando de mayor a
// * menor puntaje, e indicando a que equipo corresponde ese puntaje.

#include <iostream>

using namespace std;

void mostrar(int vector[], int vectorpos[], int dim);
void ordenar(int vector[], int dim);
void carga(int vector[], int vector2[], int dim);
void comparar(int vector[], int vectorclon[], int vectpos[], int dim);

int main()
{
    const int dim = 8;
    int equipos[dim]{0};
    int vectpos[dim], equiposclon[dim];
    carga(equipos, equiposclon, dim);
    ordenar(equiposclon, dim);
    comparar(equipos, equiposclon, vectpos, dim);
    mostrar(equipos, vectpos, dim);
    return 0;
}

void ordenar(int vector[], int dim)
{
    int i, pos, imin, temp;

    for (pos = 0; pos < dim - 1; pos++)
    {
        imin = pos;
        for (i = pos + 1; i < dim; i++)
            if (vector[i] > vector[imin])
                imin = i;
        temp = vector[pos];
        vector[pos] = vector[imin];
        vector[imin] = temp;
    }
}

void carga(int vector[], int vector2[], int dim)
{
    int val;
    for (int i = 0; i < dim; i++)
    {
        cout << "ingrese un valor : ";
        cin >> val;
        vector[i] = val;
        vector2[i] = val;
    }
}

void comparar(int vector[], int vectorclon[], int vectpos[], int dim)
{
    for (int a = 0; a < dim; a++)
    {
        for (int b = 0; b < dim; b++)
        {
            if (vectorclon[a] == vector[b])
            {
                vectpos[a] = b;
            }
        }
    }
}

void mostrar(int vector[], int vectorpos[], int dim)
{
    for (int a = 0; a < dim; a++)
    {
        cout << "posicion: " << a + 1 << " Equipo: " << vectorpos[a]
             << " Puntaje: " << vector[vectorpos[a]] << endl;
    }
}