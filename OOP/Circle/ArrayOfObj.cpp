#include "CircleWithPrivateDataFields.h"
#include <iostream>
#include <iomanip>
using namespace std;

double sum(Circle circleArray[], int size){
    //store the sum 
    double sum = 0;

    for(int i = 0; i < size; i++){
        sum += circleArray[i].getArea();
    }
    return sum; //return the sum
}

void printCircleArray(Circle circleArray[], int size){
    cout << setw(35) << left << "Radius" << setw(8) << "Area" << endl;

    for(int i = 0; i < size; i++){
        cout << setw(35) << left << circleArray[i].getRadius() << setw(8) << circleArray[i].getArea() << endl;
    }
    cout << "-----------------------------------------" << endl;

    cout << setw(35) << left << "The total area of circles is"<< setw(8) << sum(circleArray, size) << endl;
}

int main(){
    const size_t SIZE = 10;
    Circle circleArray[SIZE];

    for(int i = 0; i < SIZE; i++){
        circleArray[i].setRadius(i + 1);
    }
    printCircleArray(circleArray, SIZE);
    return 0;
}