/*
* La sucesión de Fibonacci se define como :
* f0 = 0
*  f1 = 1
*  fn = fn-1 + fn-2

* Desarrolle una función que dando n, calcule el enésimo término de la sucesión
* usando
* recursión.

? Variante: use iteración en lugar de recursión

*/

#include <iostream>

using namespace std;

int Fibonacci(int n)
{

    if (n < 2)
    {
        return n;
    }
    else
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

int FibonacciVar(int lim)
{
    if (lim < 2)
    {
        return lim;
    }
    else
    {
        int prim = 0, sec = 1, res = 0;
        for (int x = 1; x < lim; x++)
        {
            res = prim + sec;
            prim = sec;
            sec = res;
        }
        return res;
    }
}

int main()
{
    int lim;
    cout << "ingrese el limite la sucecion: " << endl;
    cin >> lim;
    cout << "==== Recursiva : ====:  " << endl;
    cout << Fibonacci(lim) << endl;
    cout << "==== iterativa ====" << endl;
    cout << FibonacciVar(lim);
    return 0;
}