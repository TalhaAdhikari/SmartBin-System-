#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>
#include <string>
#include "Bin.h"

class Truck {
public:
    float weight = 0.0;
    int TruckWasteType;
    std::string location;
    float Truckpercentage=0.0f;
    int sum_of_weight = 0;
    std::string truckId;
    float currentLoad = 0.0;
    float maxLoad = 10.0;

    Truck() {
        std::cout << "\nEnter the truck ID: ";
        std::cin >> truckId;
        /*UUID IS PENDING TO DEVELOP either user will assign or program will do it*/
        std::cout << "Enter the wastetype the truck needs to collect based on the following chart:\n";
        std::cout << "WASTE TYPES:-\n"
                  << "1. DRY WASTE.\n"
                  << "2. WET WASTE.\n"
                  << "3. HAZARDOUS WASTE.\n"
                  << "4. E-WASTE.\n";
        std::cin >> TruckWasteType;
        location = "Depot";
    }

    void addweight(Bin &b) {
        if (b.wastetype == TruckWasteType) {
            if (b.percentage >= 75) {
                if (currentLoad + b.weight <= maxLoad) {
                    std::cout << "\nTruck reached at " << b.location;
                    currentLoad = currentLoad + b.weight;
                    std::cout << "\nCollected " << b.weight << "kgs of " << b.wastetype << " from " << b.location;
                    b.weight = 0.0;
                    b.percentage = 0.0;
                    std::cout << "\nBin is now emptied and reset to 0.0kgs";
                    Truckpercentage = (currentLoad / maxLoad) * 100.0f;
                    std::cout << "\nThe truck is " << Truckpercentage << "% full";
                }
                else {
                    std::cout << "Truck is full! Cannot collect bin weight";
                }
            } 
            else {
                std::cout << "\nBin is only " << b.percentage << "% full (Needs 75% for pickup)." << std::endl;
            }
        } 
        else {
            std::cout << "\nWastetype does not match";
        } 
    } 

    void remove() {
    std::cout << "\nTruck is returning to Depot...";
    location = "Depot";
    currentLoad = 0.0;
    Truckpercentage = 0.0;
    std::cout << "\nTruck has been emptied and reset at Depot.";
    }
};

#endif // TRUCK_H