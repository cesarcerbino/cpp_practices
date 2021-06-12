// * Dado un vector de 10 enteros inicializado con datos al definirlo, programe
// * una función que permita encontrar la posición del valor máximo. Usarla
// * para informar cuál es el máximo y en que posición del vector se encuentra

#include <iostream>

using namespace std;

int valorMaximo(int vector[], int dim, int &posicion);

int main()
{
    const int dim{10};
    int vector[dim]{10, 20, 20, 10, 54, 5, 4, 6, 152, 15};
    int posicion{0};
    int valorMax = valorMaximo(vector, dim, posicion);
    cout << "el valor maximo es :" << valorMax << endl;
    cout << "y su posicion es : " << posicion << endl;
}

int valorMaximo(int vector[], int dim, int &posicion)
{
    int maximo{0};
    for (int i = 0; i < dim; i++)
    {
        maximo = i == 0 ? vector[i] : maximo;
        if (maximo <= vector[i])
        {
            maximo = vector[i];
            posicion = i;
        }
    }
    return maximo;
}
