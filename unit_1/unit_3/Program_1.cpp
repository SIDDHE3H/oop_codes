#include <iostream>
#include <string>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

string add(const string& s1, const string& s2) {
    return s1 + s2;
}

int main() {
    cout << "Sum of two integers: " << add(10, 20) << "\n";
    cout << "Sum of two doubles: " << add(2.5, 3.7) << "\n";
    cout << "Sum of three integers: " << add(10, 20, 30) << "\n";
    cout << "Concatenated strings: " << add("Hello ", "World") << "\n";
    return 0;
}
