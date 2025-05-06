#include<iostream>
using namespace std;
int main()
{
    int i,n,prime=0;
    cout<<"\nEnter the number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            prime++;
        }
    }
    if(prime==2)
    {
        cout<<"\nThis number is Prime";
    }
    else
    {
        cout<<"\nThis number is Composite";
    }
    return 0;
}
