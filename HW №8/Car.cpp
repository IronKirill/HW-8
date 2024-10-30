#include "Car.h"

Car::Car()
{
    numberOfDoors = 4;
}

Car::Car(double price, double maxSpeed, int year, string color, int numberOfDoors)
    : Vehicle(price, maxSpeed, year, color)
{
    this->numberOfDoors = numberOfDoors;
}

int Car::getNumberOfDoors() const
{
    return numberOfDoors;
}

void Car::setNumberOfDoors(int doors)
{
    this->numberOfDoors = numberOfDoors;
}

void Car::showInfo() const
{
    cout << "____________________________________________________";
    cout << "\t\n CAR: \n" << endl;
    cout << "Price: " << price << endl;
    cout << "Max Speed: " << maxSpeed << endl;
    cout << "Year: " << year << endl;
    cout << "Color: " << color << endl;
    cout << "Number of doors: " << numberOfDoors << endl;
}
