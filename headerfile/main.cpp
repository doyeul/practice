
#include <iostream>
#include "MyMath.h"

int main() {
    std::cout << add(3, 4) << std::endl;

    Vector v(3.0, 4.0);
    std::cout << v.length() << std::endl;

    return 0;
}
