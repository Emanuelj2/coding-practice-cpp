#include "MyPoint.h"
#include <cmath>

MyPoint::MyPoint(){
    x_coordinate = 0;
    y_coordinate = 0;
}
MyPoint::MyPoint(int new_x, int new_y){
    x_coordinate = new_x;
    y_coordinate = new_y;
}

//accessors
int MyPoint::getX()const{
    return x_coordinate;
}
int MyPoint::getY()const{
    return y_coordinate;
}

//mutators
void MyPoint::setX( int new_x){
    x_coordinate = new_x;
}
void MyPoint::setY( int new_y){
    y_coordinate = new_y;
}

//function that return the distance
int MyPoint::distance(const MyPoint& other)const{
    return sqrt(pow(other.x_coordinate - x_coordinate, 2)+
                pow(other.y_coordinate - y_coordinate, 2));
}