#include <iostream>
#include "CircleWithPrivateDataFields.h"
using namespace std;

//pass by value
void printCircel(Circle c){
    cout << "Area of the circel ";
    cout << c.getArea() << " is " << c.getRadius() << endl;
}

int main(){
    Circle e(5);
    printCircel(e);
    return 0;
}