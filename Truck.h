#ifndef Truck_H
#define Truck_H

#include<iostream>
#include "Bin.h"
class Truck{
    public:
    float weight=0.0;
    int TruckWasteType;
    string location;
    float percentage;
    int sum_of_weight=0;
    string truckId;
    float currentLoad=0.0;
    float maxLoad=10.0;
    float addLoad=0.0;

    Truck(){
        cout<<"Enter the truck ID";
        cin>>truckId;
        /*UUID IS PENDING TO DEVEOUP either user will assing or program will do it*/
        cout<<"Enter the wastetype the truck needs to collect based on the following chart ";
        cout<<"WASTE TYPES:-"<<endl<<"1"".""DRY WASTE""." <<endl 
        <<"2"".""WET WASTE""."<<endl
        <<"3"".""HAZARDOUS WASTE""."<<endl
        << "4"".""E""-""WASTE""."<<endl
        << "5"".""ALL"<<endl;
        cin>>wastetype;
        location="Depot";
    }

    void addweight(Bin &b){
        if(b.wastetype==TruckWasteType){
            if(b.)
        }
    }
}