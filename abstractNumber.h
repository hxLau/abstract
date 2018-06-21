#ifndef NUMBER_H
#define NUMBER_H
using namespace std;

class Number
{
  public:
     virtual void print();
     Number add(const Number&);
     Number mul(const Number&);
};

class RealNumber :public Number
{
    private:
       double real;
    public:
       RealNumber(double=0);
       virtual void print();
       RealNumber operator +(const RealNumber&);
       RealNumber operator *(const RealNumber&);
       void operator =(const RealNumber&);
}; 

class IntegerNumber :public RealNumber
{
    private:
       int num;
    public:
       IntegerNumber(int =0);
       virtual void print();
       IntegerNumber operator+(const IntegerNumber&);
       IntegerNumber operator*(const IntegerNumber&);
       void operator =(const IntegerNumber&);
};

class ComplexNumber :public Number
{
    private:
       double re,vi;
    public:
       ComplexNumber(double=0,double=0);
       virtual void print();
       ComplexNumber operator+(const ComplexNumber&);
       ComplexNumber operator*(const ComplexNumber&);
       void operator =(const ComplexNumber&);
};

#endif 
