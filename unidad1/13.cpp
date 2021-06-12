/*
* Cuenta la leyenda de la creación del ajedrez que el sabio pidió al rey como recompensa 1 grano
* de arroz por el primer casillero, 2 por el segundo, 4 por el tercero, etc. Calcule el total de
* granos de arroz en el tablero. Nota: la idea es armar un ciclo que acumule el arroz de cada
* casillero, sin embargo por fórmula sabemos que la cantidad pedida es 2 elevado a 64-1 por ello deberá usar
* variables tipo unsigned long si su sistema es de 64 bits o unsigned long long si su
* sistema es de 32 bits para poder alojar el valor requerido en forma correcta.

! Respuesta: 18 446 744 073 709 551 615
*/

#include <iostream>

using namespace std;

int main()
{
    unsigned long long int x = 1, granos = 0;
    for (int a = 0; a < 64; a++)
    {
        granos += x;
        x *= 2;
        cout << granos << "\n";
    }

    return 0;
}