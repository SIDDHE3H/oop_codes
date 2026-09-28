#include <iostream>
using namespace std;

class Test {
private:
    int value;

public:
    // Constructor
    Test(int v) : value(v) {}

    // Inline getter
    inline int getValue() const {
        return value;
    }

    // Friend function declaration
    friend void show(const Test& t);
};

// Friend function definition
void show(const Test& t) {
    cout << "Friend function output: " << t.value << endl;
}

int main() {
    Test obj(50);

    cout << "Inline getter output: " << obj.getValue() << endl;
    show(obj);

    return 0;
}
