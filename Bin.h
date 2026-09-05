#ifndef BIN_H
#define BIN_H

#include<iostream>
using namespace std;

class Bin{
   public:
   int uuid;
   float weight;
   string location;
   int wasterype;
   float percentage;

   void getdata()
{
      cout<<"ENTER THE LOCATION WHERE TO COLLECT WASTE FROM:-"<<endl;
      cin>>location;

      cout<<"WASTE TYPES:-
             1.DRY WASTE.
             2.WET WASTE.
             3.HAZARDOUS WASTE.
             4.E-WASTE."<<endl;

   
      cout<<"ENTER WASTE TYPE:-"<<endl;
      cin>>wastetype;
   
      cout<<"ENTER THE WEIGHT OF WASTE:-"<<endl;
      cin>>weight;

     
 void display()
         {
            
   if(weight!=10)
     {
      cout<<"WEIGHT OF YOUR WASTE SHOULD UNDER 10KG"<endl;
     }
     else
     {
      cout<<"YOUR WASTE WEIGHT IS ACCEPTABLE"<<endl;
      
   
      percentage=weight/10*100

      if(percentage>=75)
      {
      cout<<"TRUCK BOOKED"<<endl;
      }
      else
      {
      cout<<"BOOKING FAILED YOUR WASTE SHOULD MORE THAN 75%"<<endl;
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

