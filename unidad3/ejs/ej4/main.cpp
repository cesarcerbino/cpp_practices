// * Crear un programa que permita concatenar dos archivos de texto.
// * Variantes: puede hacerlo de modo de tal de crear una archivo nuevo
//* con la concatenación y no alterar los archivos originales, o bien hacerlo
// * de modo tal que al segundo archivo se lo
// * modifique concatenándole los contenidos del primero

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream archivo1, archivo2;
    ofstream final;
    final.open("final.txt", ios::trunc);
    archivo1.open("04uno.txt");
    archivo2.open("04dos.txt");
    if (!archivo1 || !archivo2)
    {
        cout << "Error al tratar de abrir el archivo";
        archivo1.close();
        archivo2.close();
        final.close();
        return 1;
    }
    else
    {
        archivo1.seekg(0, ios::end);
        archivo2.seekg(0, ios::end);
        if (archivo1.tellg() == 0 || archivo2.tellg() == 0)
        {
            cout << "Error: Alguno de los dos archivos esta vacio";
            archivo1.close();
            archivo2.close();
            final.close();
            return 1;
        }
        else
        {
            archivo1.seekg(0);
            archivo2.seekg(0);
        }
    }

    string line;
    while (getline(archivo1, line))
    {
        final << line << endl;
    }
    archivo1.close();
    while (getline(archivo2, line))
    {
        final << line << endl;
    }
    archivo2.close();
    final.close();

    return 0;
}