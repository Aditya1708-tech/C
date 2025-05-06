#include <iostream>
using namespace std;
int main() 
{
   
    int num1, num2, num3, sum;
    float average;

    cout << "Enter the three number: ";
    cin >> num1>> num2>> num3;


    if (num1 >= 0 && num2 >= 0 && num3 >= 0) 
	{
        
        sum = num1 + num2 + num3;

       
        average = sum / 3.0;

        
        cout << "The sum of the numbers is: " << sum << endl;
        cout << "The average of the numbers is: " << average << endl;
    } 
	else
	 { 
        cout << "Error: Please enter only non-negative numbers." << endl;
     }

    return 0;
}
