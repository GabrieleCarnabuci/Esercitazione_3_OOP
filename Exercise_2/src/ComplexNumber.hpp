#pragma once
#include <iostream>

using namespace std;

namespace ComplexLibrary{

struct ComplexNumber
{
    double reale;
    double immaginario;

    ComplexNumber(double a, double b){
        reale = a;
        immaginario = b;
    }

    ComplexNumber() = default;
};

ostream& operator<<(ostream& os, const ComplexNumber &c);

ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2);

bool operator==(const ComplexNumber &c1, const ComplexNumber &c2);

ComplexNumber coniugato(ComplexNumber &c);

}
