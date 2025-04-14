#include "fan.h"
#include <iostream>
using namespace std;

int main(){ 
    Fan fan1;
    Fan fan2(3, true, 10.0);

    cout << "Fan 1: Speed=" << fan1.getSpeed()
         << ", On=" << fan1.isOn()
         << ", Radius=" << fan1.getRadius() << endl;

    cout << "Fan 2: Speed=" << fan2.getSpeed()
         << ", On=" << fan2.isOn()
         << ", Radius=" << fan2.getRadius() << endl;

    fan1.setSpeed(2);
    fan1.setRadius(7.5);
    fan1.On();

    cout << "Fan 1 (after changes): Speed=" << fan1.getSpeed()
         << ", On=" << fan1.isOn()
         << ", Radius=" << fan1.getRadius() << endl;

    return 0;
}