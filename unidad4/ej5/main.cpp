// ? Se tiene un vector de 8 elementos enteros. Sus valores deben cargarse
// ? por consola en forma estrictamente creciente, verificando y volviendo a
// ? pedir un valor si no cumple la condición (Arme una función de carga con
// ? verificación). Programe una función que encuentre, cuál es la máxima
// ? diferencia entre dos elementos sucesivos. Informe el valor de la misma y
// ? entre que elementos se produce. Si los datos son: 2, 4, 8, 9, 35, 40, 50,
// ? 55 la máxima diferencia es 26 y y se da entre los elementos
// ? 3 y 4 (tomados como subíndices del arreglo, no como ordinales).

#include <iostream>

using namespace std;

void cargarValores(int vector[], int dim);
int diferencia(int vector[], int dim);

int main()
{
    const int dim{8};
    int valores[dim]{0};
    cargarValores(valores, dim);
    int pos = diferencia(valores, dim);
    cout << "la mayor diferencia es : " << valores[pos] - valores[pos + 1] << endl;
    cout << "los elementos se encuentran en las posiciones : " << pos << " y " << pos + 1 << endl;
    return 0;
}

void cargarValores(int vector[], int dim)
{
    int contador{0}, valor;
    while (contador < dim)
    {
        cout << "ingrese un valor:" << endl;
        cin >> valor;
        if (contador != 0)
        {

            if (valor > vector[contador - 1])
            {
                vector[contador] = valor;
                contador++;
            }
            else
            {
                cout << "ERROR el valor ingresado es menor al anterior" << endl;
            }
        }
        else
        {
            vector[contador] = valor;
            contador++;
        }
    }
}

int diferencia(int vector[], int dim)
{
    int pos = 0;
    int mayordif = vector[1] - vector[0];

    for (int a = 1; a < dim; a++)
    {
        cout << "dif:" << mayordif << endl;
        cout << "pos:" << pos << endl;
        if (mayordif < vector[a + 1] - vector[a])
        {
            mayordif = vector[a + 1] - vector[a];
            pos = a;
        }
    }
    cout << pos;
    return pos;
}
