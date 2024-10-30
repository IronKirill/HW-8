#pragma once
#include "Vehicle.h"

class Bicycle : public Vehicle 
{
private:
    bool hasGears;

public:
    Bicycle();
    Bicycle(double price, double maxSpeed, int year, string color, bool hasGears);

    bool getHasGears() const;
    void setHasGears(bool hasGears);

    virtual void showInfo() const override;//
};
