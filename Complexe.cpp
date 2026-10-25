//
// Created by Macbook1 on 10/21/26.
//

#include "Complexe.h"
#include<iostream>
using namespace std;

Complexe::Complexe(double re, double img) {
    this ->real =re ;
    this ->imaginary =img;
}

Complexe::Complexe(const Complexe &c) {
    this->real=c.real;
    this->imaginary=c.imaginary;
}

void Complexe::afficher() const{
    cout<<this ->real<<"+i"<<this->imaginary<<endl;
}


Complexe Complexe::operator-(const Complexe c) {
    Complexe res(
          this->real - c.real,
          this->imaginary - c.imaginary
      );

    return res;
    /*Complexe *res;

    res->real=this->real-c.real;
    res->imaginary=this->imaginary-c.imaginary;
    return *res;*/
}
Complexe Complexe::operator-(const double a) {
    Complexe *res = new Complexe(0.0,0.0);
    res->real=this->real-a;
    res->imaginary=this->imaginary;
    return*res;
}
Complexe Complexe::operator*(const Complexe c) {
    Complexe *res;
    res->real=(this->real*c.real)-(this->imaginary*c.imaginary);
    res->imaginary=(this->real*c.imaginary)+(this->imaginary*c.real);
    return *res;
}
Complexe Complexe::operator*(const double a) {
    Complexe *res;
    res->real=this->real*a;
    res->imaginary=this->imaginary*a;
    return *res;
}
Complexe Complexe::operator/(const Complexe c) {

    Complexe *res;

    /*res->real=(this->real*c.real)-(this->imaginary*c.imaginary);
    res->imaginary=(this->real*c.imaginary)+(this->imaginary*-c.real);*/

    return *res;
}
Complexe Complexe::operator/(const double a) {
    Complexe *res;
    res->real=this->real/a;
    res->imaginary=this->imaginary/a;
    return *res;
}




Complexe::~Complexe() {
}
