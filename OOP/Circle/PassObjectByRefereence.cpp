#include <iostream>
#include "CircleWithPrivateDataFields.h"
using namespace std;

//Note that the & means that the object is being passed by reference
// this means that you are modifying the variable directly
void printCircle(Circle& c){
    cout << "The area of the circle of " << c.getRadius() << " is " << c.getArea() << endl;
}

int main(){
    Circle myCircle(5.0);

    printCircle(myCircle);
    return 0;
}