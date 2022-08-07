#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#pragma once
using std::ostream;


class Complex
{
    friend ostream &operator<<(ostream&,const Complex&);
    friend Complex &operator*(double&,const Complex&);//double*Complex
    friend Complex &operator/(double&,Complex&);//double/Complex
public:
//operators:
Complex& operator*(double);//Complex*double
Complex& operator/(const double);//Complex/double
Complex& operator=(const Complex&);//Complex=Complex
Complex& operator-=(const Complex&);//Complex-=Complex
Complex& operator/=(const Complex&);//Complex/=Complex
Complex& operator*=(const Complex&);//Complex*=Complex
Complex& operator+=(const Complex&);//Complex+=Complex
Complex& operator+(const Complex&);//Complex+Complex
//constuctor's and distructor.
    Complex(double=0,double=0);
    ~Complex();
//get functions:
    double _getReal()const;
    double _getImagine()const;
//set functions:
    void _setReal(double);
    void _setImagine(double);

private:
    double Real,Imagine;

};

#endif