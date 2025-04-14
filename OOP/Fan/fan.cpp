#include "fan.h"
using namespace std;

Fan::Fan(){
    speed = 1;
    on = false;
    radius = 5.5;
}

Fan::Fan(int newspeed, bool ison, double newradius){
    speed = newspeed;
    on = ison;
    radius = newradius;
}

int Fan::getSpeed()const{
    return speed;
}
bool Fan::isOn()const{
    return on;
}
double Fan::getRadius()const{
    return radius;
}

void Fan::setSpeed(int newspeed){
    if (newspeed >= 1 && newspeed <= 3)  // assuming 1-3 are valid
        speed = newspeed;
}
void Fan::setRadius(double newradius){
    if (newradius > 0)
        radius = newradius;
}
void Fan::On(){
    on = true;
}
void Fan::Off(){
    on = false;
}