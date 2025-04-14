#include <iostream>
#include "quad.h"

int main() {
    // Prompt user for the coefficients a, b, and c
    double a, b, c;
    std::cout << "Enter the coefficients a, b, and c for the quadratic equation ax^2 + bx + c = 0: ";
    std::cin >> a >> b >> c;

    // Create a QuadEqu object using the input values
    QuadEqu eq(a, b, c);

    // Calculate and display the discriminant
    double discriminant = eq.getDiscriminant();
    std::cout << "Discriminant: " << discriminant << std::endl;

    // Determine the number of roots based on the discriminant
    if (discriminant > 0) {
        std::cout << "The equation has two real roots: "
                  << "Root 1 = " << eq.getRoot1() << ", "
                  << "Root 2 = " << eq.getRoot2() << std::endl;
    } else if (discriminant == 0) {
        std::cout << "The equation has one real root: " << eq.getRoot1() << std::endl;
    } else {
        std::cout << "The equation has no real roots." << std::endl;
    }

    return 0;
}