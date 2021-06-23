#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int RandNum;

    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        RandNum = (rand() % 100) + 1;
        cout << "numero random: " << RandNum << endl;
        cout << " =========== " << endl;
    }

    return 0;
}