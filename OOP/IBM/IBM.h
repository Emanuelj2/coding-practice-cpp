#ifndef IBM_H
#define IBM_H
#include <string>
using namespace std;

class IBM{
    public:
        IBM(const string& newName, int newAge, double newWeigth, double newHeigth);
        IBM(const string& newName, double newWeigth, double newHeigth);

        double getIBM()const;
        string getSatatus()const;

        string getName()const;
        int getAge()const;
        double getWeigth()const;
        double getHeigth()const;


    private:
        string name;
        int age;
        double weight;
        double height;

};
#endif