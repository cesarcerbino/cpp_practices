// * Dado un archivo que contienen una serie de números enteros, obtener a partir
// * de él dos archivos. En el primero solo habrá números pares, y en el segundo
// * solo impares.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream archivo;
    ofstream archivoimp, archivopar;
    archivo.open("03entrada.txt");
    archivoimp.open("impares.txt");
    archivopar.open("pares.txt");
    if (!archivo) //verifica si se pudo leer el archivo
    {
        cout << "Error al tratar de abrir el archivo";
        archivo.close();
        archivoimp.close();
        archivopar.close();
        return 1;
    }
    else
    {
        archivo.seekg(0, ios::end);
        if (archivo.tellg() == 0) //verifica si el archivo esta vacio
        {
            cout << "Error: Archivo vacio";
            archivo.close();
            archivoimp.close();
            archivopar.close();
            return 1;
        }
        else
        {
            archivo.seekg(0);
        }
    }

    int num;
    while (archivo >> num) //lee archivo y reparte valores
    {
        if (num % 2 == 0)
        {
            archivopar << num << endl;
        }
        else
        {
            archivoimp << num << endl;
        }
    }
    archivo.close();
    archivoimp.close();
    archivopar.close();
    return 0;
}