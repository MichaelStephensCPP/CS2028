#ifndef TASK1_H
#define TASK1_H
#include <iostream>
class Complex
{
    public:

    Complex();
    Complex(double x, double y);
    Complex(double x);

    double getReal();
    double getImaginary();
    void setReal(double x);
    void setImaginary(double y);
    void print();
    //friend ostream &operator<<(ostream &output, Complex &c);
    Complex operator+(Complex &c);
    Complex operator-(Complex &c);
    Complex operator*(Complex &c);
    Complex operator/(Complex &c);
    bool operator==(Complex &c);

    private:
    double real,imaginary;
};

#endif