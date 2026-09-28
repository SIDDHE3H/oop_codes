#include <iostream>

class Base {
public:
    void show() const {
        std::cout << "Base public function\n";
    }
};

class PublicDerived : public Base {
    // Inherits publicly, so 'show()' remains public
};

class PrivateDerived : private Base {
public:
    void callBaseShow() const {
        // 'show()' is inherited privately, so we must wrap it
        show();
    }
};

int main() {
    PublicDerived publicObject;
    publicObject.show();  // ✅ Allowed: 'show()' is public

    PrivateDerived privateObject;
    privateObject.callBaseShow();  // ✅ Allowed via wrapper

    // privateObject.show(); // ❌ Error: 'show()' is private in PrivateDerived

    return 0;
}

