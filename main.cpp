#include <iostream>
#include "task1.h"
#include "task1.cpp"
#include <string>
using namespace std;



int main()
{   
    double x,y,x2,y2;
    string op;
    cout<<"Enter x and y: ";
    cin>>x>>y;
    cout<<"What operation to perform (+, -, *, /, ==): ";
    cin>>op;
    cout<<"Enter x2 and y2: ";
    cin>>x2>>y2;
    Complex a;
    Complex b;

    a.setReal(x);
    a.setImaginary(y);
    b.setReal(x2);
    b.setImaginary(y2);

    if(op=="+")
    (a+b).print();
    else if(op=="-")
    (a-b).print();
    else if(op=="*")
    (a*b).print();
    else if(op=="/")
    (a/b).print();
    else if(op=="==")
    cout<<"Are they equal (True/False): "<<(a==b)<<endl;
    
    return 0;
}
