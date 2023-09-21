#include <iostream>
using namespace std;
int main()
{
    double pi(3.14159);
    bool lampe(true);
    char lettre('A');
    string chaine("C'est une chaîne de caractères");

    cout << "le chiffre pi a comme valeur" << pi << "." << endl;
    cout << "La lammpe est : " << lampe << " (O pour éteinte et 1 pour allumée)" << endl;
    cout << "La lettre à afficher est : " << lettre << "." << endl;
    cout << "La chaîne de caractères à afficher est : " << chaine << "." << endl;

    return 0;
}