#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r=0, int i=0) : real(r), imag(i) {}
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    void display() const {
        cout << real << (imag >= 0 ? " +" : " - ") << abs(imag) << "i\n";
    }
};

int main() {
    Complex a(2,3), b(4,5);
    Complex sum = a + b;
    cout << "First: "; a.display();
    cout << "Second: "; b.display();
    cout << "Sum: "; sum.display();
    return 0;
}
