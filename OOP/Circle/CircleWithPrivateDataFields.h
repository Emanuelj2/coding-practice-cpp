#ifndef CIRCLE_H
#define CIRCLE_H
class Circle{

public:

    Circle();
    Circle(double);
    //accessors
    double getArea()const;
    double getRadius()const;

    //mutators
    void setRadius(double);

private:
    double radius;
};

#endif