#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual void displayName() const = 0;
    virtual ~Shape() = default;
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() const override { return length * width; }
    void displayName() const override { cout << "Rectangle"; }
};

class Circle : public Shape {
    double radius;
public:
    explicit Circle(double r) : radius(r) {}
    double area() const override { return 3.14159 * radius * radius; }
    void displayName() const override { cout << "Circle"; }
};

class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double area() const override { return 0.5 * base * height; }
    void displayName() const override { cout << "Triangle"; }
};

int main() {
    vector<unique_ptr<Shape>> shapes;
    shapes.push_back(make_unique<Rectangle>(5.0, 3.0));
    shapes.push_back(make_unique<Circle>(2.0));
    shapes.push_back(make_unique<Triangle>(4.0, 6.0));

    for (const auto& s : shapes) {
        s->displayName();
        cout << " Area: " << s->area() << "\n";
    }
    return 0;
}
