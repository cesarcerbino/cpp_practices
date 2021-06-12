/* 
* Ingresar un valor en mm y convertirlo a pulgadas (Dato: 1" = 25,4 mm) 

*/

#include <iostream>
// ! dif entre esta y stdlib stdio?

using namespace std;

int main()
{
    float medida, pulgadas;

    cout << "ingrese la medida en pulgadas: \n";
    cin >> medida;
    pulgadas = medida / 25.4;
    cout << " la medida en pulgadas es: " << pulgadas;
    system("pause");
}