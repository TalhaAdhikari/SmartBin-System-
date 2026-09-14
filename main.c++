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

    cout << "\n\n=== INITIALIZING COLLECTION TRUCK ===\n";
    Truck t1;
    t1.addweight(b1);

    return 0;
}