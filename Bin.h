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
   int dweight;
   int wweight;
   int hweight;
   int eweight;
   int sum_of_weight;

   void getdata()
{
      cout<<"ENTER THE LOCATION WHERE TO COLLECT WASTE FROM:-"<<endl;
      cin>>location;

      cout<<"WASTE TYPES:-
             1.DRY WASTE.
             2.WET WASTE.
             3.HAZARDOUS WASTE.
             4.E-WASTE.
             5.ALL"<<endl;

   
      cout<<"ENTER WASTE TYPE:-"<<endl;
      cin>>wastetype;
   
      
      }
     
 void display()
 {
   switch(wastetype)
   {
      case 1:
      cout<<"ENTER THE WEIGHT OF WASTE:-"<<endl;
      cin>>weight;
      if(weight!=10)
     {
      cout<<"WEIGHT OF YOUR WASTE SHOULD UNDER 10KG"<endl;
     }
     else
     {
      cout<<"YOUR WASTE WEIGHT IS ACCEPTABLE"<<endl;
      
     }
      percentage=weight/10*100;

      if(percentage>=75)
      {
      cout<<"TRUCK BOOKED"<<endl;
      }
      else
      {
      cout<<"BOOKING FAILED YOUR WASTE SHOULD MORE THAN 75%"<<endl;
      }
     break;

      case 2:
      cout<<"ENTER THE WEIGHT OF WASTE:-"<<endl;
      cin>>weight;
      if(weight!=10)
     {
      cout<<"WEIGHT OF YOUR WASTE SHOULD UNDER 10KG"<endl;
     }
     else
     {
      cout<<"YOUR WASTE WEIGHT IS ACCEPTABLE"<<endl;
      
     }
      percentage=weight/10*100;

      if(percentage>=75)
      {
      cout<<"TRUCK BOOKED"<<endl;
      }
      else
      {
      cout<<"BOOKING FAILED YOUR WASTE SHOULD MORE THAN 75%"<<endl;
      }

      break;

      case 3:
cout<<"ENTER THE WEIGHT OF WASTE:-"<<endl;
      cin>>weight;
      if(weight!=10)
     {
      cout<<"WEIGHT OF YOUR WASTE SHOULD UNDER 10KG"<endl;
     }
     else
     {
      cout<<"YOUR WASTE WEIGHT IS ACCEPTABLE"<<endl;
      
     }
      percentage=weight/10*100;

      if(percentage>=75)
      {
      cout<<"TRUCK BOOKED"<<endl;
      }
      else
      {
      cout<<"BOOKING FAILED YOUR WASTE SHOULD MORE THAN 75%"<<endl;
      }
      break;

      case 4:

      cout<<"ENTER THE WEIGHT OF WASTE:-"<<endl;
      cin>>weight;
      if(weight!=10)
     {
      cout<<"WEIGHT OF YOUR WASTE SHOULD UNDER 10KG"<endl;
     }
     else
     {
      cout<<"YOUR WASTE WEIGHT IS ACCEPTABLE"<<endl;
      
     }
      percentage=weight/10*100;

      if(percentage>=75)
      {
      cout<<"TRUCK BOOKED"<<endl;
      }
      else
      {
      cout<<"BOOKING FAILED YOUR WASTE SHOULD MORE THAN 75%"<<endl;
      }
      break;

      case 5:

      cout<<"ENTER THE WEIGHT OF DRY WASTE:-"<<endl;
      cin>>dweight;

      cout<<"ENTER THE WEIGHT OF WET WASTE:-"<<endl;
      cin>>wweight;

      cout<<"ENTER THER WEIGHT OF HAZARDOUS WASTE:-"<<endl;
      cin>>hweight;

      cout<<"ENTER THE WEIGHT OF E-WASTE:-"<<endl;
      cin>>eweight;

      sum_of_weight=dweight+wweight+hweight+eweight;

   if (sum_of_weight!=25)
   {
    cout<<"THE WEIGHT OF YOUR WASTE IS NOT UNDER 25 KG"<<endl;
   }

   else
   {
      cout<<"YOUR WASTE WEIGHT IS ACCEPTABLE"<<endl;
   }
      
      

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

