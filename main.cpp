#include <iostream>
#include "object.h"

int main(void) {
    char* pMemAllocated = new char[sizeof(Object)];
    
    Object* pObject = new(pMemAllocated) Object(5);
    std::cout << "Object value is " << pObject->m_value << std::endl;
    pObject->~Object();

    pObject = new(pMemAllocated) Object(15);
    std::cout << "New Object value is " << pObject->m_value << std::endl;
    pObject->~Object();

    delete[] pMemAllocated;

    return 0;
}
