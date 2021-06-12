// ? Se pide ingresar por teclado 8 valores que se cargarán en un vector, pero
// ? se controlará que todos los valores sean distintos. Si el valor ingresado
// ? ya se encuentra en los cargados previamente, vuelva a solicitar el valor
// ? para esa posición.

#include <iostream>

using namespace std;

void carga(int vector[], int dim);
void mostrar(int vector[], int dim);
bool Verificar(int vector[], int contador, int valor);

int main()
{
    const int dim = 8;
    int vector[8]{0};
    carga(vector, dim);
    mostrar(vector, dim);
    return 0;
}

bool Verificar(int vector[], int contador, int valor)
{
    int i;
    for (i = 0; i < contador && vector[i] != valor; i++)
        ;
    return i >= contador ? true : false;
}

void carga(int vector[], int dim)
{
    int val;
    int cont = 0;
    for (int i = 0; i < dim; i++)
    {
        cout << "ingrese un valor : ";
        cin >> val;
        if (Verificar(vector, cont, val))
        {
            vector[i] = val;
            cont++;
        }
        else
        {
            cout << "valor Repetido" << endl;
            i--;
        }
    }
}

void mostrar(int vector[], int dim)
{
    for (int a = 0; a < dim; a++)
    {
        cout << "posicion: " << a << " Valor: " << vector[a] << endl;
    }
}