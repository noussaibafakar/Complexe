//
// Created by Macbook1 on 10/21/26.
//

#ifndef COMPLEXE_COMPLEXE_H
#define COMPLEXE_COMPLEXE_H


class Complexe {
private :
    double real;
    double imaginary;
    double mod;
public:
    Complexe(double real, double imaginary);
    Complexe(const Complexe &c);

    Complexe operator+(const Complexe c);
    Complexe operator+(const double a);

    Complexe operator-(const Complexe c);
    Complexe operator-(const double a);

    Complexe operator*(const Complexe c);
    Complexe operator*(const double a);

    Complexe operator/(const Complexe c);
    Complexe operator/(const double a);




    bool operator==(const Complexe c)const;
    bool operator==(const double a);

    bool operator!=(const Complexe c);
    bool operator!=(const double a);

    bool operator<(const Complexe c);
    bool operator<(const double a);

    bool operator>(const Complexe c);
    bool operator>(const double a);

    double calculemod(double,double) ;

    void afficher() const;
    ~Complexe();
};


#endif //COMPLEXE_COMPLEXE_H
