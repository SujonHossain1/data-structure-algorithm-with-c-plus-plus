#include <iostream>
using namespace std;

class Complex;

class Calculator {
    public:

    int add(int a, int b) {
        return a + b;
    }

    int sumComplex(Complex o1, Complex o2) {

        return(o1.num1, o2.num2);

    }
};

class Complex {
    int num1, num2;
    friend int Calculator::sumComplex(Complex o1, Complex o2);

    public:
    void setNumber (int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    void print() {
        cout << "Your number is " << num1 << " and " << num2 << "i" << endl;
    }

};



int main() {

    return 0;
}