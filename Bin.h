#ifndef BIN_H
#define BIN_H

#include<iostream>

class Bin
{
   public:
   int uid;
   float weight;
   std::string location;
   int wastetype;
   float percentage;
   int dweight;
   int wweight;
   int hweight;
   int eweight;
   int sum_of_weight;

   void getdata()
   {
      std::cout<<"ENTER THE LOCATION WHERE TO COLLECT WASTE FROM:-"<<std::endl;
      std::cin>>location;

      std::cout<<"WASTE TYPES:-"<<std::endl
               <<"1"".""DRY WASTE""." <<std::endl 
               <<"2"".""WET WASTE""."<<std::endl
               <<"3"".""HAZARDOUS WASTE""."<<std::endl
               <<"4"".""E""-""WASTE""."<<std::endl
               <<"5"".""ALL"<<std::endl;

      std::cout<<"ENTER WASTE TYPE:-"<<std::endl;
      std::cin>>wastetype;
   }
     
   void display()
   {
      switch(wastetype)
      {
         case 1:
         std::cout<<"ENTER THE WEIGHT OF WASTE:-"<<std::endl;
         std::cin>>weight;

         if(weight!=10)
         {
            std::cout<<"WEIGHT OF YOUR WASTE SHOULD UNDER 10KG"<<std::endl;
         }
         else
         {
            std::cout<<"YOUR WASTE WEIGHT IS ACCEPTABLE"<<std::endl;
         }

         percentage=weight/10*100;

         if(percentage>=75)
         {
            std::cout<<"TRUCK BOOKED"<<std::endl;
         }
         else
         {
            std::cout<<"BOOKING FAILED YOUR WASTE SHOULD MORE THAN 75%"<<std::endl;
         }
         break;

         case 2:
         std::cout<<"ENTER THE WEIGHT OF WASTE:-"<<std::endl;
         std::cin>>weight;

         if(weight!=10)
         {
            std::cout<<"WEIGHT OF YOUR WASTE SHOULD UNDER 10KG"<<std::endl;
         }
         else
         {
            std::cout<<"YOUR WASTE WEIGHT IS ACCEPTABLE"<<std::endl;
         }

         percentage=weight/10*100;

         if(percentage>=75)
         {
            std::cout<<"TRUCK BOOKED"<<std::endl;
         }
         else
         {
            std::cout<<"BOOKING FAILED YOUR WASTE SHOULD MORE THAN 75%"<<std::endl;
         }
         break;

         case 3:
         std::cout<<"ENTER THE WEIGHT OF WASTE:-"<<std::endl;
         std::cin>>weight;

         if(weight!=10)
         {
            std::cout<<"WEIGHT OF YOUR WASTE SHOULD UNDER 10KG"<<std::endl;
         }
         else
         {
            std::cout<<"YOUR WASTE WEIGHT IS ACCEPTABLE"<<std::endl;
         }

         percentage=weight/10*100;

         if(percentage>=75)
         {
            std::cout<<"TRUCK BOOKED"<<std::endl;
         }
         else
         {
            std::cout<<"BOOKING FAILED YOUR WASTE SHOULD MORE THAN 75%"<<std::endl;
         }
         break;

         case 4:
         std::cout<<"ENTER THE WEIGHT OF WASTE:-"<<std::endl;
         std::cin>>weight;

         if(weight!=10)
         {
            std::cout<<"WEIGHT OF YOUR WASTE SHOULD UNDER 10KG"<<std::endl;
         }
         else
         {
            std::cout<<"YOUR WASTE WEIGHT IS ACCEPTABLE"<<std::endl;
         }

         percentage=weight/10*100;

         if(percentage>=75)
         {
            std::cout<<"TRUCK BOOKED"<<std::endl;
         }
         else
         {
            std::cout<<"BOOKING FAILED YOUR WASTE SHOULD MORE THAN 75%"<<std::endl;
         }
         break;

         case 5:
         std::cout<<"ENTER THE WEIGHT OF DRY WASTE:-"<<std::endl;
         std::cin>>dweight;

         std::cout<<"ENTER THE WEIGHT OF WET WASTE:-"<<std::endl;
         std::cin>>wweight;

         std::cout<<"ENTER THER WEIGHT OF HAZARDOUS WASTE:-"<<std::endl;
         std::cin>>hweight;

         std::cout<<"ENTER THE WEIGHT OF E-WASTE:-"<<std::endl;
         std::cin>>eweight;

         sum_of_weight=dweight+wweight+hweight+eweight;

         if(sum_of_weight!=25)
         {
            std::cout<<"THE WEIGHT OF YOUR WASTE IS NOT UNDER 25 KG"<<std::endl;
         }
         else
         {
            std::cout<<"YOUR WASTE WEIGHT IS ACCEPTABLE"<<std::endl;
         }

         percentage=weight/25*100;

         if(percentage>=75)
         {
            std::cout<<"TRUCK BOOKED"<<std::endl;
         }
         else
         {
            std::cout<<"BOOKING FAILED YOUR WASTE SHOULD MORE THAN 75%"<<std::endl;
         }
         break;

         default:
         std::cout<<"SORRY,INVALID CHOICE!"<<std::endl;
         break;
      }
   }
};

int main()
{
   Bin b;
   b.getdata();
   b.display();

   return 0;
}
