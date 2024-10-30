#include "Vehicle.h"

Vehicle::Vehicle()
{
    price = 0;
    maxSpeed = 0;
    year = 0;
    color = "undefined";
}

Vehicle::Vehicle(double price, double maxSpeed, int year, const string color)
{
    this->price = price;
    this->maxSpeed = maxSpeed;
    this->year = year;
    this->color = color;
}

double Vehicle::getPrice() const
{
    return price;
}

void Vehicle::setPrice(double price)
{
    this->price = price;
}

double Vehicle::getMaxSpeed() const
{
    return maxSpeed;
}

void Vehicle::setMaxSpeed(double maxSpeed)
{
    this->maxSpeed = maxSpeed;
}

int Vehicle::getYear() const
{
    return year;
}

void Vehicle::setYear(int year)
{
    this->year = year;
}

string Vehicle::getColor() const
{
    return color;
}

void Vehicle::setColor(string color)
{
    this->color = color;
}
