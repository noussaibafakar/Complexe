//
// Created by Macbook1 on 10/21/26.
//

#include "Complexe.h"
#include<iostream>
using namespace std;

Complexe::Complexe(double re, double img) :real(re),imaginary(img){
}

Complexe::Complexe(const Complexe &c) {
    this->real=c.real;
    this->imaginary=c.imaginary;
}

double Complexe::calculemod(double real,double img) {
    mod=sqrt(real+imaginary);
    return mod;
}

void Complexe::afficher() const{
    cout<<this ->real<<"+i"<<this->imaginary<<endl;
}
Complexe Complexe::operator+(const Complexe c) {
    Complexe *res=new Complexe(0,0);
    res->real=this->real+c.real;
    res->imaginary=this->imaginary+c.imaginary;
    return*res;
}
Complexe Complexe::operator+(const double a) {
    Complexe *res=new Complexe(0,0);
    res->real=this->real+a;
    res->imaginary=this->imaginary+0;
    return*res;
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
    Complexe *res=new Complexe(0,0);
    res->real=(this->real*c.real)-(this->imaginary*c.imaginary);
    res->imaginary=(this->real*c.imaginary)+(this->imaginary*c.real);
    return *res;
}
Complexe Complexe::operator*(const double a) {
    Complexe *res=new Complexe(0,0);
    res->real=this->real*a;
    res->imaginary=this->imaginary*a;
    return *res;
}
Complexe Complexe::operator/(const Complexe c) {
    //a+bi/c+di
    Complexe *res=new Complexe(0,0);
    this->real=((this->real*c.real)+(c.imaginary*this->imaginary)/
        (c.real*c.real)+(c.imaginary*c.imaginary));
    this->imaginary=((this->imaginary*c.real)-(c.imaginary*this->real)/
        (c.real*c.real)+(c.imaginary*c.imaginary));


    /*res->real=(this->real*c.real)-(this->imaginary*c.imaginary);
    res->imaginary=(this->real*c.imaginary)+(this->imaginary*-c.real);*/

    return *res;
}
Complexe Complexe::operator/(const double a) {
    Complexe *res=new Complexe(0,0);
    res->real=this->real/a;
    res->imaginary=this->imaginary/a;
    return *res;
}


bool Complexe::operator==(const Complexe c) const {

    if (this->real==c.real && this->imaginary==c.imaginary) {
        return true;
    };
    return false;

}
bool Complexe::operator==(const double a ){

    if (this->real==a && this->imaginary==0) {
        return true;
    };
    return false;

}
bool Complexe::operator!=(const Complexe c) {
    if (this->real!=c.real || this->imaginary!=c.imaginary) {
        return true;
    }
    return false;
}
bool Complexe::operator!=(const double a ) {
    if (this->real!=a || this->imaginary!=0) {
        return true;
    }
    return false;
}
bool Complexe::operator<(const Complexe c) {
    if (calculemod(this->real,this->imaginary)<
        calculemod(c.real,c.imaginary)) {
        return true;
    }
 return false;
}
bool Complexe::operator<(const double a) {
    if (calculemod(this->real,this->imaginary)<
        calculemod(a,0)) {
        return true;
        }
    return false;
}

bool Complexe::operator>(const Complexe c) {
    if (calculemod(this->real,this->imaginary)>
        calculemod(c.real,c.imaginary)) {
        return true;
        }
    return false;
}
bool Complexe::operator>(const double a) {
    if (calculemod(this->real,this->imaginary)>
        calculemod(a,0)){
        return true;
        }
    return false;
}


Complexe::~Complexe() {
}
