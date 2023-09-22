#include <iostream>
using namespace std;
int nombre_secondes (int heures, int minutes, int secondes = 0);
int main ()
{
    cout << nombre_secondes(10, 20) << endl;
    return 0;
}
int nombre_secondes(int heures, int minutes, int secondes)
{
    int total = 0;
    total = heures * 60 * 60;
    total += minutes * 60;
    total += secondes;
    return 0;
}