#include <iostream>
#include <cmath>
using namespace std;

 
 
int
main ()
{
  int w;
  int x;
  int y;
  int z;
int cts;
int ct;  
int sts;  
int dlts;  
int lnt;  
int cgc;   
cout << "Welcome to CPP Taco Bell!";
    cout <<"Enter 1 for Crunchy Taco Supreme, 2 for Soft Taco Supreme, 3 for Doritos Locos Tacos Supreme, 4 for Chalupa Supreme";
cin >> x;
   
if (x == 1){
cout << "Please enter the amount tacos:";
cin >> y;
cts = (1.89*y)*1.06;
      
cout << "Your total will be " << cts;
cout << "  Thank You for visiting CPP Taco Bell." ;
return 0;
    
}else if(x == 2){

cout << "Please enter the amount of Soft Tacos:):";
cin >> y;
sts = (1.89*y)*1.06;
 
cout << "Your total will be " << ct;
cout << "  Thank You for visiting CPP Taco Bell." ;
return 0;

}else if(x == 3){

cout << "Please enter the amount of Doritos Locos Tacos Supreme:):";
cin >> y;
dlts = (2.39*y)*1.06;
 
cout << "Your total will be " << ct;
cout << "  Thank You for visiting CPP Taco Bell." ;
return 0;

}
