//
// Created by Macbook1 on 10/21/26.
//

#ifndef COMPLEXE_COMPLEXE_H
#define COMPLEXE_COMPLEXE_H


class Complexe {
private :
    double real;
    double imaginary;
public:
    Complexe(double real, double imaginary);
    Complexe(const Complexe &c);
    Complexe operator-(const Complexe c);
    Complexe operator-(const double a);
    Complexe operator*(const Complexe c);
    Complexe operator*(const double a);
    Complexe operator/(const Complexe c);
    Complexe operator/(const double a);

    void afficher() const;
    ~Complexe();
};


#endif //COMPLEXE_COMPLEXE_H
