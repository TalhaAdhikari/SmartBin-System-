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
   int weightofwaste;

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
      cin>>weightofwaste;
   }
};
