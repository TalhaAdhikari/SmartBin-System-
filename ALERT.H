#ifndef SMARTBIN_H
#define SMARTBIN_H

#include<iostream>
#include "Bin.h"

class SmartBin {
public:

    void smartAlertFlag(Bin &b) {

        if (b.percentage < 50) {
            std::cout << "\nSMART ALERT: NORMAL";
        }
        else if (b.percentage >= 50 && b.percentage < 80) {
            std::cout << "\nSMART ALERT: MEDIUM - Bin is filling up!";
        }
        else if (b.percentage >= 80 && b.percentage < 100) {
            std::cout << "\nSMART ALERT: HIGH - Bin is almost full!";
            std::cout << "\nTruck booked";
        }
        else if (b.percentage == 100) {
            std::cout << "\nSMART ALERT: BIN FULL!";
            std::cout << "\nCannot add more waste!";
            std::cout << "\nTruck booked";
        }
    }
};

#endif
