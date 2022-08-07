#include "Complex.h"
#include <iostream>
using namespace std;
Complex& Complex::operator*(const double n)
{
    Complex *tmp=new Complex;
    tmp->_setReal(Real*n);
    tmp->_setImagine(Imagine*n);
    return *tmp;
}

Complex& Complex::operator/(const double n)
{
    Complex *tmp=new Complex;
    tmp->_setReal(Real/n);
    tmp->_setImagine(Imagine/n);
    return *tmp;
}

Complex& operator*(double& n,const Complex& c)
{
    Complex *tmp=new Complex;
    tmp->_setReal(n*c._getReal());
    tmp->_setImagine(n*c._getImagine());
    return *tmp;
}

Complex& operator/(double& n,Complex& c)
{
    Complex *tmp=new Complex;
    tmp->_setReal((n/(c.Imagine*c.Imagine+c.Real*c.Real)));
    tmp->_setImagine(((-1)*n*c.Imagine)/(c.Imagine*c.Imagine+c.Real*c.Real));
    return *tmp;
}

Complex& Complex::operator=(const Complex& other)
{
    cout<<"in operator="<<endl;
    Imagine=other.Imagine;
    Real=other.Real;
    return *this;
}

Complex& Complex::operator+(const Complex& other)
{
    Complex *tmp=new Complex;
    tmp->_setReal(this->_getReal()+other._getReal());
    tmp->_setImagine(this->_getImagine()+other._getImagine());
    return *tmp;
}

Complex& Complex::operator+=(const Complex& other)
{
    Real+=other.Real;
    Imagine+=other.Imagine;
    return *this;
}

Complex& Complex::operator*=(const Complex& other)
{
    double tempreal;
    tempreal=(Real*other.Real)-(Imagine*other.Imagine);
    Imagine=(Real*other.Imagine)+(Imagine*other.Real);
    Real=tempreal;
    return *this;
}

Complex& Complex::operator/=(const Complex& other)
{
    double tempreal;
    tempreal=((Real*other.Real)+(Imagine*other.Imagine))/
    ((other.Real*other.Real)+(other.Imagine*other.Imagine));
    Imagine=((Imagine*other.Real)-(Real*other.Imagine))/
    ((other.Real*other.Real)+(other.Imagine)*(other.Imagine));
    Real=tempreal;
    return *this;
}

Complex& Complex::operator-=(const Complex& other)
{
    Real-=other.Real;
    Imagine-=other.Imagine;
    return *this;
}

ostream &operator<<(ostream & output,const Complex& c)
{
    if(c.Real!=0)
    {
        if(c.Imagine<0)
            output<<c.Real<<c.Imagine<<"i";
        else if(c.Imagine>0)
           output<<c.Real<<"+"<<c.Imagine<<"i";
        else 
           output<<c.Real;
    }
    else output<<c.Imagine<<"i";
    cout<<endl;
    return output;
}

Complex::Complex(double real,double imagine)
{
    this->_setReal(real);
    this->_setImagine(imagine);
}

Complex::~Complex()
{
    
}

void Complex::_setImagine(double x)
{
    Imagine=x;
}

void Complex::_setReal(double x)
{
    Real=x;
}

double Complex::_getImagine()const
{
    return Imagine;
}

double Complex::_getReal()const
{
    return Real;
}
