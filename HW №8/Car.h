#pragma once
#include "Vehicle.h"

class Car : public Vehicle 
{

private:
    int numberOfDoors;

public:
    Car();
    Car(double price, double maxSpeed, int year, string color, int numberOfDoors);

    int getNumberOfDoors() const;
    void setNumberOfDoors(int doors);

    virtual void showInfo() const override;//
};
