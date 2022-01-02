#include <iostream>
using namespace std;

class Complex {
    int num1, num2;

    public:
    friend Complex sumComplex(Complex obj, Complex obj2);

    void setNumber (int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    void print() {
        cout << "Your number is " << num1 << " and " << num2 << "i" << endl;
    }

};

Complex sumComplex (Complex obj, Complex obj2) {
    Complex obj3;
    obj3.setNumber((obj.num1 + obj2.num1), (obj.num2 + obj2.num2));

    return obj3;
}


int main() {
    Complex complex1, complex2, sum;

    complex1.setNumber(1, 4);
    complex1.print();

    complex2.setNumber(3, 6);
    complex2.print();

    sum = sumComplex(complex1, complex2);

    sum.print();

    return 0;
}