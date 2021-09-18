#include <iostream>
#include <cmath>
using namespace std;

 
 
int
main ()
{
  
  int x;
  int y;
 
int cts;
  
int ct;
  
int sts;
  
int st;
  
int lnt;
  
int cgc;
  
 
cout << "Welcome to CPP Dominoes!";
    cout <<"Enter 1 for Chicken Taco Pizza, 2 for MeatZZa, 3 for ExtracaganZZa, 4 for Philly Cheese Steak";
cin >> x;
  
 
if (x == 1)
    {

cout << "Please enter the amount of pizzas:";
cin >> y;

cts = 11.99*y;
      
cout << "Your total will be " << cts;
cout << "  Thank You for visiting CPP Dominoes." ;
return 0;
    
} else if(x == 2){

cout << "Please enter the size(1 for small, 2 for medium, 3 for large):";
cin >> y;

if(y==1){
    ct=6;
}else if(y==2){
    ct=8;
}else if(y==3){
    ct=10;
}
      
cout << "Your total will be " << ct;
cout << "  Thank You for visiting CPP Dominoes." ;
return 0;
    
}

 
 
 
 
 
}
