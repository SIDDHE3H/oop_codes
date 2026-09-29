#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;   // Pure virtual
    virtual ~Shape() = default;
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() const override { return length * width; }
};

class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double area() const override { return 0.5 * base * height; }
};

int main() {
    Rectangle rect(8.0, 4.0);
    Triangle tri(5.0, 3.0);

    cout << "Rectangle Area: " << rect.area() << "\n";
    cout << "Triangle Area: " << tri.area() << "\n";

    return 0;
}
