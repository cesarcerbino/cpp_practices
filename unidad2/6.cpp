/*
* Desarrolle una función que a partir de un parámetro entero calcule el factorial del mismo
* usando recursión.

? Variante: use iteración en lugar de recursión
*/

#include <iostream>

using namespace std;

long int Factorial(int number)
{
	static long int resultado = 1;
	resultado *= number;
	if (number > 1)
	{
		Factorial(number - 1);
	}
	return resultado;
}

long int FactorialVar(int numbervar)
{
	long int resultadoVar = 1;
	while (numbervar != 0)
	{
		resultadoVar *= numbervar;
		numbervar -= 1;
	}
	return resultadoVar;
}

int main()
{
	cout << Factorial(3) << endl;
	cout << Factorial(4) << endl;
	cout << "variante: " << FactorialVar(10);
	return 0;
}