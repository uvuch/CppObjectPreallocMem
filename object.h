#include <iostream>

class Object {
public:
    int m_value;

    Object(int value): m_value(value) {}

    ~Object() {
        std::cout << "Destructor called" << std::endl;
    }

};
