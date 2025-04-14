#ifndef MYPOINT_H
#define MYPOINT_H

class MyPoint{
    public:
        MyPoint();
        MyPoint(int new_x, int new_y);

        //accessors
        int getX()const;
        int getY()const;

        //mutators
        void setX( int);
        void setY( int);

        //function that return the distance
        int distance(const MyPoint& other)const;

    private:
        int x_coordinate;
        int y_coordinate;

};
#endif