/*
* Desarrolle una función que calcule la sumatoria de Gauss ∑
* i=1 hasta n . 
* Dicha función recibe como parámetro el entero hasta el que se quiere calcular.

! Nota: El ejercicios tiene por objetivo practicar las iteraciones, no usar la fórmula de Gauss.

*/

#include <iostream>

using namespace std;

int Gauss(int Limit)
{
    int resultado = 0;
    for (int a = 1; a <= Limit; a++)
    {
        resultado += a;
    }
    return resultado;
}

int main()
{
    cout << Gauss(100);
    return 0;
}