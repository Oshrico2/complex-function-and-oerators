#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex c1(1,-4),c2(15,1);
    Complex c3(2,3);
    cout<<c1<<c2<<c3;
    c1+=c2+=c3;
    cout<<c1;
    double d=5;
    c3=d*c2;
    // Complex c3=c1+c2;
    // cout<<c3;
    // c2+=c1;
    // cout<<c2;
    // c2*=c1;
    // cout<<c2;
    // c2/=c1;
    // cout<<c2;
    // c2-=c1;
    // cout<<c2;
    // c3=c1+c2;
    // double d=5;
    // c2=d*c1;
    // cout<<c2;
    // c2=d/c1;
    // cout<<c2;
    // c2=c1*d;
    // cout<<c2;
    // c2=c1/d;
    // cout<<c2;



    return 0;
}