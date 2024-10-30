#include "Bicycle.h"

Bicycle::Bicycle()
{
    hasGears = false;
}

Bicycle::Bicycle(double price, double maxSpeed, int year, string color, bool hasGears)
    : Vehicle(price, maxSpeed, year, color)
{
    this->hasGears = hasGears;
}

bool Bicycle::getHasGears() const
{
    return hasGears;
}

void Bicycle::setHasGears(bool hasGears)
{
    this->hasGears = hasGears;
}

void Bicycle::showInfo() const
{
    cout << "____________________________________________________";
    cout << "\t\n BICYCLE: \n" << endl;
    cout << "Price: " << price << endl;
    cout << "Max Speed: " << maxSpeed << endl;
    cout << "Year: " << year << endl;
    cout << "Color: " << color << endl;
    cout << "Has Gears: " << (hasGears ? "Yes" : "No") << endl;
}
