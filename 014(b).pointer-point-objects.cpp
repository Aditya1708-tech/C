#include<iostream>
using namespace std; 
class Vehicle 
{
    public:
      string type;  
	  string maker; 
	  int year;     

    void show() {

    cout << "The vehicle type is a " << type
    << ", built by " << maker
    << " and Year is " << year << endl;
}
}; 
int main()
{
Vehicle veh; 
Vehicle *vehPtr = &veh; 

vehPtr->type = "Car";      
vehPtr->maker = "BMW";     
vehPtr->year = 2025;
        
vehPtr->show(); 
 
return 0;  
}
