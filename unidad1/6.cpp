/*
* Dado como dato el valor del lado de un cuadrado calcular su perímetro, su superficie, e
* informar los mismos con carteles aclaratorios
*/

#include <iostream>

using namespace std;

int main()
{
    int lado, perimetro, superficie;
    cout << "ingrese el valor de uno de los lados: ";
    cin >> lado;
    perimetro = lado * 4;
    superficie = lado * lado;
    cout << "el area es: " << superficie << "\n el perimetro es :" << perimetro;
    system("pause");
}