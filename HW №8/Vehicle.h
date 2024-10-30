#pragma once
#include <string>
#include <iostream>
using namespace std;

class Vehicle 
{

protected:
    double price;
    double maxSpeed;
    int year;
    string color;

public:
    Vehicle();
    Vehicle(double price, double maxSpeed, int year, const string color);

    double getPrice() const;
    void setPrice(double price);

    double getMaxSpeed() const;
    void setMaxSpeed(double maxSpeed);

    int getYear() const;
    void setYear(int year);

    string getColor() const;
    void setColor(string color);

    virtual void showInfo() const = 0;
};
