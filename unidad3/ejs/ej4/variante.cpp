

#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    fstream archivo1;
    ifstream archivo2;
    archivo1.open("04uno.txt");
    archivo2.open("04dos.txt");
    if (!archivo1 || !archivo2)
    {
        cout << "Error al tratar de abrir el archivo";
        archivo1.close();
        archivo2.close();
        return 1;
    }
    else
    {
        archivo2.seekg(0, ios::end);
        if (archivo2.tellg() == 0)
        {
            cout << "Error: El archivo esta vacio";
            archivo1.close();
            archivo2.close();
            return 1;
        }
        else
        {
            archivo2.seekg(0);
        }
    }
    string line2;
    archivo1.seekg(0, ios::end);
    while (getline(archivo2, line2))
    {
        archivo1 << line2 << endl;
    }
    return 0;
}