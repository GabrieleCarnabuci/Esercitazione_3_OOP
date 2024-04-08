#include "src/ComplexNumber.hpp"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //ComplexLibrary::ComplexNumber c;

    cout << "Prove di stampa dei numeri complessi : " << endl;

    ComplexLibrary::ComplexNumber c1(1,-4);

    cout << "c1 = " << c1 << endl;

    ComplexLibrary::ComplexNumber c2(1,2);

    cout << "c2 = " << c2 << endl;

    ComplexLibrary::ComplexNumber somma = c1 + c2;

    cout << "La somma dei numeri complessi c1 e c2 risulta : " << somma << endl;

    ComplexLibrary::ComplexNumber z1 = coniugato(c1);
    ComplexLibrary::ComplexNumber z2 = coniugato(c2);

    cout << "Il coniugato di c1 risulta : " << z1 << endl;
    cout << "Il coniugato di c2 risulta : " << z2 << endl;


    cout << "Prova dell'operator == per confrontare due numeri complessi : " << endl;

    bool risultato = ComplexLibrary::operator==(c1,c2);
    if (risultato == 1) {
        cout << "Test di uguaglianza superato per i numeri " << c1 << " e " << c2 << endl;
    }
    else {
        cout << "Test di uguaglianza fallito per i numeri " << c1 << " e " << c2 << endl;
    }

    return 0;
}
