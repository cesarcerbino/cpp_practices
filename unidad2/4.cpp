/*
* Desarrolle una función que dada una temperatura (float) en grados fahrenheit los convierta a
* grados celcius. Nota: En fahrenheit el punto de congelación del agua es 32° y la temperatura de
* ebullición del agua es 212°.

! Formula => c = (f - 32)*5/9

*/

#include <iostream>

using namespace std;

float CelciusConversor(float Fahrenheit)
{
    //  ! float a = 5, b = 9;
    //  ! float div = a / 9;
    float Celcius = (Fahrenheit - 32) * 5 / 9;
    return Celcius;
}

int main()
{
    float Fahrenheit;
    cout << "ingrese la temperatura : " << endl;
    cin >> Fahrenheit;
    cout << CelciusConversor(Fahrenheit);
    return 0;
}