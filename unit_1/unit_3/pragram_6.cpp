#include <iostream>
using namespace std;

class Distance {
    int meters;
public:
    explicit Distance(int m) : meters(m) {}
    bool operator>(const Distance& other) const { return meters > other.meters; }
    void display() const { cout << meters << " meters\n"; }
};

int main() {
    Distance d1(120), d2(90);
    cout << "First: "; d1.display();
    cout << "Second: "; d2.display();
    cout << (d1 > d2 ? "First is greater\n" : "Second is greater or equal\n");
    return 0;
}
