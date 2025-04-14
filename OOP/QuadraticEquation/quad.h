#ifndef QUAD_H
#define QUAD_H

class QuadEqu{
public:
    QuadEqu(); //default constructor
    QuadEqu(double new_a, double new_b, double new_c);

    //accessors
    double getA()const;
    double getB()const;
    double getC()const;


    double getDiscriminant()const;
    double getRoot1()const;
    double getRoot2()const;

private:
    double a;
    double b;
    double c;
};

#endif