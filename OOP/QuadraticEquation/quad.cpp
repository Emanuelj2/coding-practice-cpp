#include "quad.h"
#include <cmath>


QuadEqu::QuadEqu(){
    a = 1;
    b = 1;
    c = 1;
} 
QuadEqu::QuadEqu(double new_a, double new_b, double new_c){
    a = new_a;
    b = new_b;
    c = new_c;
}

//accessors
double QuadEqu::getA()const{
    return a;
}
double QuadEqu::getB()const{
    return b;
}
double QuadEqu::getC()const{
    return c;
}


double QuadEqu::getDiscriminant()const{
    return pow(b, 2) - (4 * a * c);
}
double QuadEqu::getRoot1()const{
    return (-b +(sqrt(getDiscriminant()))) / (2 * a);
}
double QuadEqu::getRoot2()const{
    return (-b -(sqrt(getDiscriminant()))) / (2 * a);
}
