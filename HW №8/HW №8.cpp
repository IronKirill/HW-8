#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bicycle.h"
#include "Lorry.h"
#include "Garage.h"
using namespace std;

int main()
{
    Garage garage;

    garage.addVehicle(make_unique<Car>(15000, 220, 2020, "Red", 4));
    garage.addVehicle(make_unique<Bicycle>(500, 30, 2021, "Blue", true));
    garage.addVehicle(make_unique<Lorry>(30000, 130, 2019, "White", 10));

    cout << "All vehicles in the garage:\n";
    garage.showVehicles();

    // Removing a vehicle by index
    int removeIndex = 1;
    cout << "\nRemoving vehicle at index " << removeIndex << "\n";
    garage.removeVehicleByNumber(removeIndex);
    cout << "Vehicles after removal:\n";
    garage.showVehicles();

    // Searching by type (e.g., finding the first Car)
    string type = "Car";
    cout << "\nSearching for a vehicle of type " << type << "\n";
    Vehicle* car = garage.searchByType(type);
    
    if (car)
    {
        cout << "Car found" << type << ":\n";
        car->showInfo();
    }
    
    else
    {
        cout << "No Car found.\n";
    }

    // Searching by number (e.g., third vehicle in the garage)
    int index = 0;
    cout << "\nSearching for vehicle at index " << index << "\n";
    Vehicle* vehicleByNumber = garage.searchByNumber(index);
    
    if (vehicleByNumber) 
    {
        cout << "Vehicle found at index " << index << ":\n";
        vehicleByNumber->showInfo();
    }
    
    else 
    {
        cout << "No vehicle found at this index\n";
    }

    // Searching by type and speed (e.g., Cars with speed >= 200)
    string type_ = "Car";
    cout << "\nSearching for Cars with speed >= 200\n";
    auto fastCars = garage.searchByTypeAndSpeed(type_, 200);
    
    if (!fastCars.empty()) 
    {
        cout << "Cars found with speed >= 200:\n";
        for (const auto& fastCar : fastCars) 
        {
            fastCar->showInfo();
        }
    }
    else 
    {
        cout << "No Cars found with speed >= 200\n";
    }

    // Editing a vehicle's price and color
    int editIndex = 0;
    double newPrice = 16000;
    string newColor = "Green";
    cout << "\nEditing vehicle at index " << editIndex << "\n";
    garage.editVehicle(editIndex, newPrice, newColor);
    cout << "Vehicle after edit:\n";
    garage.searchByNumber(editIndex)->showInfo();

    // Sorting vehicles by speed
    cout << "\nSorting vehicles by speed in descending order\n";
    garage.sortVehiclesBySpeed();

    cout << "Vehicles after sorting:\n";
    garage.showVehicles();
}
