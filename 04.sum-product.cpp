#include <iostream>
using namespace std;
int main() 
{
    int num1,num2,sum,difference,product;
    double quotient ;
    
  
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

      sum = num1 + num2;
     difference = num1 - num2;
     product = num1 * num2;
    
    if (num2 != 0)
	{
        quotient = (num1) / num2;
        
    }
	else 
   {
        cout << "Division by zero is not allowed!" << endl;
    }

        cout << "Sum: " << sum << endl;
        cout << "Difference: " << difference << endl;
        cout << "Product: " << product << endl;
        cout << "Quotient: " << quotient << endl;
        
    return 0;
}		
