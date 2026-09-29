#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r=0, int i=0) : real(r), imag(i) {}
    friend Complex operator+(int value, const Complex& c);
    void display() const { cout << real << (imag>=0?"+":"-") << abs(imag) << "i\n"; }
};

Complex operator+(int value, const Complex& c) {
    return Complex(value + c.real, c.imag);
}

int main() {
    Complex c(2,3);
    Complex result = 10 + c;
    cout << "Result: "; result.display();
    return 0;
}
