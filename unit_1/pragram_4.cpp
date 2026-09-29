#include <iostream>
using namespace std;

class Counter {
    int value;
public:
    explicit Counter(int v = 0) : value(v) {}
    Counter& operator++() { ++value; return *this; }       // Prefix
    Counter operator++(int) { Counter old = *this; ++value; return old; } // Postfix
    void display() const { cout << value << "\n"; }
};

int main() {
    Counter c(5);
    cout << "After prefix increment: "; ++c; c.display();
    cout << "Value returned by postfix increment: "; Counter old = c++; old.display();
    cout << "Counter after postfix increment: "; c.display();
    return 0;
}
