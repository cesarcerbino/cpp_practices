// * Arme un programa que lea cantidades reales de un archivo. Informe por
// * pantalla cual es el menor valor y en que orden se encontraba
// * (ordinal del valor en la secuencia)

#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream archivo;
    archivo.open("02entrada.txt");
    if (!archivo)
    {
        cout << "Error al tratar de abrir el archivo";
        return 1;
    }
    else
    {
        archivo.seekg(0, ios::end);
        if (archivo.tellg() == 0)
        {
            cout << "Error: Archivo vacio";
            return 1;
        }
        else
        {
            archivo.seekg(0);
        }
    }
    double num, menor;
    int pos = 1;

    for (int a = 1; archivo >> num; a++)
    {

        a == 1 ? menor = num : a = a;
        if (num <= menor)
        {
            pos = a;
            menor = num;
        }
    }
    cout << "el menor numero es : " << menor << endl;
    cout << "la posicion de este numero es: " << pos << endl;
    archivo.close();
    return 0;
}