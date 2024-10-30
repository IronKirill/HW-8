#pragma once
#include "Vehicle.h"

class Lorry : public Vehicle 
{

private:
    double loadCapacity;

public:
    Lorry();
    Lorry(double price, double maxSpeed, int year, string color, double loadCapacity);

    double getLoadCapacity() const;
    void setLoadCapacity(double capacity);

    virtual void showInfo() const override;//
};
