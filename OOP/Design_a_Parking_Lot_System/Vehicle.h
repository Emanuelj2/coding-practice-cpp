#ifndef VEHICLE_H
#define VEHICLE_H

using namespace std;

enum class VehicleType {MOTORCYCLE, CAR, BUS };

class Vehicle{
    protected:
        VehicleType type;
    public:
        Vehicle( VehicleType t) : type(t) {}
        virtual ~Vehicle() {}
        VehicleType getType()const{
            return type;
        }
};

#endif 