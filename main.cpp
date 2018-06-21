#include<iostream>
#include"abstractNumber.h"
using namespace std;

int main()
{
    RealNumber real1(5.5);
    RealNumber real2(2);
    RealNumber real3;
    Number* rptr=new RealNumber;
    
    real3=real1+real2;
    rptr=&real3;
    rptr->print();
   
    real3=real1*real2;
    rptr->print();

    cout<<endl;

    IntegerNumber int1(7),int2(8),int3;
    Number* iptr=new IntegerNumber;

    int3=int1+int2;
    iptr=&int3;
    iptr->print();
 
    int3=int1*int2;
    iptr->print();

    cout<<endl;
 
    ComplexNumber com1(2.5,2),com2(1.5,2.5),com3;
    Number* cptr=new ComplexNumber;

    com3=com1+com2;
    cptr=&com3;
    cptr->print();
   
    com3=com1*com2;
    cptr->print();
    return 0;
}
