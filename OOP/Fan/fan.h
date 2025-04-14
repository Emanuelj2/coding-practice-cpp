#ifndef FAN_H
#define FAN_H

class Fan{
public:
    Fan();
    Fan(int newspeed, bool on, double newradius);

    int getSpeed()const;
    bool isOn()const;
    double getRadius()const;

    void setSpeed(int);
    void setRadius(double);
    void On();
    void Off();
    
private: 
    int speed;
    bool on;
    double radius;
};
#endif