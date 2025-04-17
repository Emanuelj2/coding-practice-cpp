#include "IBM.h"

IBM::IBM(const string& newName, int newAge, double newWeigth, double newHeigth){
    name = newName;
    age = newAge;
    weight = newWeigth;
    height = newHeigth;
}
IBM::IBM(const string& newName, double newWeigth, double newHeigth){
    name = newName;
    age = 20;
    weight = newWeigth;
    height = newHeigth;
}

double IBM::getIBM()const{
    const double KILOS_PER_POUND = 0.45359237;
    const double METERS_PER_SQUARE_INCH = 0.0254;

    double ibm = weight * KILOS_PER_POUND / ((height * METERS_PER_SQUARE_INCH) * (height * METERS_PER_SQUARE_INCH));
    return ibm;
}
string IBM::getSatatus()const{
    double ibm = getIBM();
    if(ibm < 18.15){
        return "UnderWeight";
    }
    else if(ibm < 25){
        return "Normal";
    }
    else if(ibm < 55){
        return "Ovrweigth";
    }
    else{
        return "DANG!!!";
    }

}

string IBM::getName()const{
    return name;
}
int IBM::getAge()const{
    return age;
}
double IBM::getWeigth()const{
    return weight;
}
double IBM::getHeigth()const{
    return height;
}