#include<iostream>
using namespace std;
class MyClass {
private:
    int value;
    
public:
    // Default Constructor
    MyClass() {
        value = 0;
        cout << "Default constructor called. Value initialized to " << value << endl;
    }
 // Parameterized Constructor
    MyClass(int v) {
        value = v;
        cout << "Parameterized constructor called. Value initialized to " << value << endl;
    }
   // Copy Constructor
    MyClass(const MyClass &obj) {
        value = obj.value;
        cout << "Copy constructor called. Copied value: " << value << endl;
    }
   // Destructor
    ~MyClass() {
        cout << "Destructor called for object with value: " << value << endl;
    }
    // Display value
    void displayValue() {
        cout << "Value: " << value << endl;
    }
};
int main() {
    // Default constructor call
    MyClass obj1;
    obj1.displayValue();
  // Parameterized constructor call
    MyClass obj2(100);
    obj2.displayValue();
  // Copy constructor call
    MyClass obj3 = obj2;  // Copying obj2 into obj3
    obj3.displayValue();

    return 0;
