#include "ComplexNumber.hpp"
#include <cmath>

namespace ComplexLibrary{
// funzione per il coniugato
ComplexNumber coniugato(ComplexNumber &c){
    double coniug = -c.immaginario;
    ComplexNumber numero_coniugato(c.reale,coniug);
    return numero_coniugato;
}

ostream& operator<<(ostream& os, const ComplexNumber &c)
{
    os << c.reale;
    if(c.immaginario > 0){
        os << "+" << c.immaginario << "i";
    }
    else if(c.immaginario == 0){
        os << "";
    }
    else {
        os << c.immaginario << "i";
    }
    return os;
}

ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2)
{
    double reale = c1.reale + c2.reale;
    double immaginario = c1.immaginario + c2.immaginario;
    ComplexNumber c(reale, immaginario);
    return c;
}

bool operator==(const ComplexNumber &c1, const ComplexNumber &c2)
{
    double tolleranza = 1.00e-06;
    if (abs(c1.reale - c2.reale) < tolleranza && abs(c1.immaginario - c2.immaginario) < tolleranza)
        return 1;
    else
        return 0;
}

}
