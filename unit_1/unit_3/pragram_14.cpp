#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() const {
        cout << "Base object\n";
    }
    virtual ~Base() = default;
};

class Derived : public Base {
public:
    void display() const override {
        cout << "Derived object\n";
    }
};

void displayByValue(Base obj) {
    obj.display();   // Slicing occurs
}

void displayByReference(const Base& obj) {
    obj.display();   // Preserves polymorphism
}

void displayByPointer(const Base* obj) {
    obj->display();  // Also preserves polymorphism
}

int main() {
    Derived d;
    cout << "Passing by value: ";
    displayByValue(d);
    cout << "Passing by reference: ";
    displayByReference(d);
    cout << "Passing by pointer: ";
    displayByPointer(&d);
    return 0;
}


