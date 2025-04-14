#include <iostream>
using namespace std;

class Circle{
public:
    double radius;
    //make the default constructor (this gives a default value if the user dose not enter a value)
    Circle(){
        radius = 1; 
    }

    //constructor
    Circle(double newRadius){
        radius = newRadius;
    }

    double getArea(){
        return radius * radius * 3.14159;
    }

};


int main(){
    Circle circle1(1.0);
    Circle circle2(25);
    Circle circle3(125);
    cout << "The area of the circle of radius "<< circle1.radius << " is " << circle1.getArea() << endl;
    cout << "The area of the circle of radius " << circle2.radius << " is " << circle2.getArea() << endl;
    cout << "The area of the circle of radius "<< circle3.radius << " is " << circle3.getArea() << endl;
      // Modify circle radius
    circle2.radius = 100;
    cout << "The area of the circle of radius "<< circle2.radius << " is " << circle2.getArea() << endl;

    return 0;
}