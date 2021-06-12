// ? En un vector de 10 elementos encontrar los dos valores máximos, o sea el
// ? más grande y el que le siga. Cargue el vector en la declaración. Si
// ? inicializa con los datos: 6, 1, 3, 7, 9, 4, 10, 2, 8, 5
// ? el máximo es 10 en la posición 6 y el segundo es 9 en la posición 4
// ? 1. Piense que haría si fuesen 100.000 elementos y quiere los 15 más
// ? grandes (no para programarlo, pero si para discutir la estrategia en clase)

#include <iostream>

using namespace std;

void maxcalculator(int vector[], int dim, int &pos, int &pos2);

int main()
{
    const int dim = 10;
    int vector[dim]{6, 1, 3, 7, 9, 4, 10, 2, 8, 5};
    int pos = 0, pos2 = 1;
    maxcalculator(vector, dim, pos, pos);
    cout << "el maximo es: " << vector[pos] << " posicion: " << pos;
    cout << "el segundo maximo es: " << vector[pos2] << " posicion: " << pos2;
}

void maxcalculator(int vector[], int dim, int &pos, int &pos2)
{

    int max = vector[0] > vector[1] ? vector[0] : vector[1];
    int max2;

    for (int a = 1; a < dim; a++)
    {
        if (vector[a] > max)
        {
            max = vector[a];
            pos = a;
            // ! Terminar
        }
    }
}