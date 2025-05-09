#include <iostream>
using namespace std;
int main() {

    int x,y;
    float z;

    cout<<"\nEnter two integears ";
    cin >>x>>y;

    try {

        
        if (y == 0)
            throw 0;

        z=(float)x/y;
        cout<<"\nDivision = "<<z;
    } 

    catch (int num_exception) {
        cout <<"Error: Cannot divide by "<< num_exception;
    }

    return 0;
}
