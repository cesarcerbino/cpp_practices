// * Crear un programa que permita generar un archivo de texto a partir de
// * palabras ingresadas por teclado, donde haya como máximo 80 caracteres por
// * renglón. Pero deberá evitarse cortar palabras.
// ? Nota: para averiguar cuantos caracteres tiene un string, puede usarse la
// ? función size, por ejemplo, si declaré str cadena; luego puedo obtener el
// ? largo con cadena.size();

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream archpalabras;
    archpalabras.open("palabras.txt", ios::trunc);
    if (!archpalabras)
    {
        cout << "Error al tratar de abrir el archivo";
        return 1;
    }
    string palabra, linea = "";
    cout << "ingrese palabras, una vez que quiera terminar ingrese 0" << endl;
    while (true)
    {
        cout << "ingrese una palabra: " << endl;
        cin >> palabra;
        if (palabra == "0")
        {
            break;
        }
        if (linea.size() >= 80 || (linea + " " + palabra).size() > 80)
        {
            cout << " === salto de linea === " << endl;
            archpalabras << linea << endl;
            linea = "";
            linea += palabra;
        }
        else
        {
            linea += " " + palabra;
        }
    }
    archpalabras << linea;
    archpalabras.close();
    return 0;
}