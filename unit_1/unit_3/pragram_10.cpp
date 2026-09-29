#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const { return 0.0; }
    virtual ~Shape() = default;
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() const override { return length * width; }
};

class Circle : public Shape {
    double radius;
public:
    explicit Circle(double r) : radius(r) {}
    double area() const override {
        return 3.14159 * radius * radius;
    }
};

void printArea(const Shape& s) {
    cout << "Area: " << s.area() << "\n";
}

int main() {
    Rectangle rect(5.0, 3.0);
    Circle circ(2.0);

    printArea(rect);
    printArea(circ);

    return 0;
}
