#include <iostream>
using namespace std;
int main()
{
    int a(1), b(2), c(3);
    bool lampe(true), diode(false);
    char lettre1('A'), lettre2('B'), lettre3('C');
    string chaine1("C'est une chaîne"), chaine2(" de caractères");

    cout << "Les 3 chiffres pi sont" << a << "," << b << "et" << c <<endl;
    cout << "La lammpe est : " << lampe << "<et le diode est :" << diode;
    cout << " (O pour eteinte et 1 pour allumee)" << endl;
    cout << "Las lettres à afficher sont : " << lettre1 << "," << lettre2 << "et" << lettre3 <<endl;
    cout << "Les chaînes de caractères à afficher sont : " << chaine1 << chaine2 << "." << endl;

    return 0;
}