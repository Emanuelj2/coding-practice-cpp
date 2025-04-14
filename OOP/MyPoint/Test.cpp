#include <iostream>
#include "MyPoint.h"

int main() {
    MyPoint p1(3, 4);
    MyPoint p2;

    std::cout << "Distance: " << p1.distance(p2) << std::endl;

    return 0;
} 