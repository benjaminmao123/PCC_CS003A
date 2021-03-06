#pragma once

#include <iostream>

#include "Term.h"
#include "ArrayLibrary.h"

class Poly
{
public:
    Poly();
    Poly(double *coefs, const unsigned int order);

    //the BIG 3
    Poly(const Poly &other);
    Poly &operator=(const Poly &rhs);
    ~Poly();

    friend bool operator==(const Poly &lhs, const Poly &rhs);
    friend bool operator!=(const Poly &lhs, const Poly &rhs);
    friend bool operator>(const Poly &lhs, const Poly &rhs);
    friend bool operator<(const Poly &lhs, const Poly &rhs);

    Term operator[](const unsigned int order) const;

    friend Poly operator+(const Poly &lhs, const Term &t);
    friend Poly operator+(const Poly &lhs, const Poly &rhs);

    friend Poly operator-(const Poly &p);
    friend Poly operator-(const Poly &lhs, const Poly &rhs);

    friend Poly operator*(const Poly &lhs, const Term &t);
    friend Poly operator*(const Poly &lhs, const Poly &rhs);

    friend Poly operator/(const Poly &lhs, const Poly &rhs);
    friend Poly operator%(const Poly &lhs, const Poly &rhs);

    friend std::ostream &operator<<(std::ostream &outs, const Poly &p);
    friend std::istream &operator>>(std::istream &ins, Poly &p);

    int order() const { return _order; }

private:
    void swap(Poly &p);
    void fix_order();           //get rid of highest terms with zero coefs
    unsigned int _order;
    double *_coefs;
};