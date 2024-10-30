#include "Lorry.h"

Lorry::Lorry()
{
    loadCapacity = 0;
}

Lorry::Lorry(double price, double maxSpeed, int year, string color, double loadCapacity)
    : Vehicle(price, maxSpeed, year, color)
{
    this->loadCapacity = loadCapacity;
}

double Lorry::getLoadCapacity() const
{
    return loadCapacity;
}

void Lorry::setLoadCapacity(double capacity)
{
    this->loadCapacity = loadCapacity;
}

void Lorry::showInfo() const
{
    cout << "____________________________________________________";
    cout << "\t\n LORRY: \n" << endl;
    cout << "Price: " << price << endl;
    cout << "Max Speed: " << maxSpeed << endl;
    cout << "Year: " << year << endl;
    cout << "Color: " << color << endl;
    cout << "Load Capacity: " << loadCapacity << " tons" << endl;
}
