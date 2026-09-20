#include<iostream>
using namespace std;
#include "Bin.h"
#include "Truck.h"
#include "ALERT.h"

int main(){
    Bin b1;
    b1.getdata();
    b1.display();
    SmartBin alertSystem;
    alertSystem.smartAlertFlag(b1);

    if(b1.percentage<75){
        cout<<"\nCollection not required";
    }
    else{
    Truck t1;
    t1.addweight(b1);
    if(t1.Truckpercentage>=75){
            t1.remove();
    }
    else{
        cout<<"\nTruck does not need to be emptied (needs to be more than 75% full)";
    }
    }
    return 0;
}