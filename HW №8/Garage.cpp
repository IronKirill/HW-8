#include "Garage.h"
#include "Car.h"
#include "Bicycle.h"
#include "Lorry.h"
#include <iostream>
#include <algorithm>

void Garage::addVehicle(unique_ptr<Vehicle> vehicle)
{
    vehicles.push_back(move(vehicle));
}

void Garage::removeVehicleByNumber(int index)
{
    if (index >= 0 && index < vehicles.size()) 
    {
        vehicles.erase(vehicles.begin() + index);
    }
}

Vehicle* Garage::searchByType(string type)//????????????????????????????????????????????????
{
    for (auto& vehicle : vehicles) 
    {
        if (typeid(*vehicle).name() == type) 
        {
            return vehicle.get();
        }
    }
    return nullptr;
}

Vehicle* Garage::searchByNumber(int index)
{
    return (index >= 0 && index < vehicles.size()) ? vehicles[index].get() : nullptr;
}

vector<Vehicle*> Garage::searchByTypeAndSpeed(string type, double minSpeed)
//????????????????????????????????????????????????
{
    vector<Vehicle*> results;
    for (auto& vehicle : vehicles) 
    {
        if (typeid(*vehicle).name() == type && vehicle->getMaxSpeed() >= minSpeed) 
        {
            results.push_back(vehicle.get());
        }
    }
    return results;
}

void Garage::editVehicle(int index, double newPrice, string newColor)
{
    if (index >= 0 && index < vehicles.size()) 
    {
        vehicles[index]->setPrice(newPrice);
        vehicles[index]->setColor(newColor);
    }
}

void Garage::sortVehiclesBySpeed()
{
    sort(vehicles.begin(), vehicles.end(), [](unique_ptr<Vehicle>& a, unique_ptr<Vehicle>& b) 
    {
        return a->getMaxSpeed() > b->getMaxSpeed();
    });
}

void Garage::showVehicles() const
{
    for (auto& vehicle : vehicles) 
    {
        vehicle->showInfo();
    }
}
