#include<iostream>
#include"abstractNumber.h"
using namespace std;

void Number::print(){}

Number Number::add(const Number& other){}

Number Number::mul(const Number& other){}    

RealNumber::RealNumber(double re)
{
    real=re;
}

void RealNumber::print()
{
    cout<<real<<endl;
}

RealNumber RealNumber::operator+(const RealNumber& other)
{
    RealNumber a;
    a.real=real+other.real;
    return a;
}

RealNumber RealNumber::operator*(const RealNumber& other)
{
    RealNumber a;
    a.real=real*other.real;
    return a;
}

void RealNumber::operator=(const RealNumber& other)
{
    real=other.real;
}

IntegerNumber::IntegerNumber(int i)
{
    num=i;
}

void IntegerNumber::print()
{
    cout<<num<<endl;
}

IntegerNumber IntegerNumber::operator+(const IntegerNumber& other)
{
    IntegerNumber a;
    a.num=num+other.num;
    return a;
}

IntegerNumber IntegerNumber::operator*(const IntegerNumber& other)
{
    IntegerNumber a;
    a.num=num*other.num;
    return a;
}

void IntegerNumber::operator=(const IntegerNumber& other)
{
    num=other.num;
}

ComplexNumber::ComplexNumber(double r,double v)
{
    re=r;
    vi=v;
}

void ComplexNumber::print()
{
    cout<<re<<"+"<<vi<<"i"<<endl;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& other)
{
    ComplexNumber a;
    a.re=re+other.re;
    a.vi=vi+other.vi;
    return a;
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& other)
{
    ComplexNumber a;
    a.re=re*other.re-vi*other.vi;
    a.vi=re*other.vi+vi*other.re;
    return a;
}

void ComplexNumber::operator=(const ComplexNumber& other)
{
    re=other.re;
    vi=other.vi;
}








