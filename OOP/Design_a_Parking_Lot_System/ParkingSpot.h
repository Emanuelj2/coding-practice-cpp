#ifndef PARKINGSPOT_H
#define PARKINGSPOT_H

#include "Vehicle.h"

class ParkingSpot{
private:
    VehicleType spotType;
    bool isOccupied;
    Vehicle * parkedVehicle;
public:
    ParkingSpot(VehicleType type): spotType(type), isOccupied(false), parkedVehicle(nullptr){}
    bool park(Vehicle *vehicle); //we are going to see if a vehicle is parked and we are going to reference the type of vehicle that is parked
    void leave();
    bool isAvaliable() const {return !isOccupied;}
    VehicleType getSpotType() const {return spotType;}
};
#endif