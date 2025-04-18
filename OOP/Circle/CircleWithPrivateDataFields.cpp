#include "CircleWithPrivateDataFields.h"

Circle::Circle(){
    radius = 1;
}
Circle::Circle(double newRadius){
    radius = newRadius;
}
//accessors
double Circle::getArea()const{
    return 3.14 * radius * radius;
}
double Circle::getRadius()const{
    return radius;
}

//mutators
void Circle::setRadius(double newRadius){
    radius = (newRadius >= 0) ? newRadius : 0;
}