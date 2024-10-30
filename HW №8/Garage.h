#pragma once
#include "Vehicle.h"
#include <vector>

class Garage 
{

private:
    vector<unique_ptr<Vehicle>> vehicles;

public:
    void addVehicle(unique_ptr<Vehicle> vehicle);
    void removeVehicleByNumber(int index);
    Vehicle* searchByType(string type);
    Vehicle* searchByNumber(int index);
    vector<Vehicle*> searchByTypeAndSpeed(string type, double minSpeed);
    void editVehicle(int index, double newPrice, string newColor);
    void sortVehiclesBySpeed();
    void showVehicles() const;
};
