#ifndef BIN_H
#define BIN_H

#include <string>
#include <iostream>

class Bin
{
   public:
   float weight;
   std::string location;
   int wastetype;
   float percentage;

   void getdata()
   {
      std::cout << "ENTER THE LOCATION WHERE TO COLLECT WASTE FROM:-" << std::endl;
      std::cin>>location;

      std::cout << "WASTE TYPES:-\n"
                << "1. DRY WASTE.\n"
                << "2. WET WASTE.\n"
                << "3. HAZARDOUS WASTE.\n"
                << "4. E-WASTE.\n";

      std::cout << "ENTER WASTE TYPE:-" << std::endl;
      std::cin >> wastetype;
   }
      
   void display()
{
   switch(wastetype)
   {
      case 1:
      case 2:
      case 3:
      case 4:
         std::cout << "ENTER THE WEIGHT OF WASTE:-" << std::endl;
         std::cin >> weight;

         // Input loop: prevents advancing until a valid weight <= 10 is entered
         while(weight > 10 || weight <= 0)
         {
            std::cout << "INVALID WEIGHT! CAPACITY EXCEEDED (Max 10KG)." << std::endl;
            std::cout << "PLEASE RE-ENTER WEIGHT OF WASTE:-" << std::endl;
            std::cin >> weight;
         }

         std::cout << "YOUR WASTE WEIGHT IS ACCEPTABLE" << std::endl;
         percentage = (weight / 10.0f) * 100.0f;
         break;

      default:
         std::cout << "SORRY, INVALID CHOICE!" << std::endl;
         percentage = 0;
         break;
   }
}
};

#endif