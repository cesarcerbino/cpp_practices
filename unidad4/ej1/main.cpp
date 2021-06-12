// ! Armar un vector con 10 valores enteros en la inicialización.
// ! Hallar la sumatoria de los valores. Si prueba con los pares comenzando en 2,
// ! la suma debe dar 110.

#include <iostream>

using namespace std;

int main()
{
    const int dim{10};
    int vector[dim]{10, 20, 20, 10, 5, 5, 4, 6, 15, 15};
    int sumatoria = 0;
    for (int i = 0; i < dim; i++)
    {
        sumatoria += vector[i];
    }
    cout << "el resultado es: " << sumatoria << endl;
    return 0;
}