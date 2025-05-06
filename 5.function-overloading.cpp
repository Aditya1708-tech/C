#include<iostream>
using namespace std;
double area(double r)
{
	return 3.14*r*r;
}
int area(int l,int w)
{
	return l*w;
}
double area(double b ,double h)
{
	return 0.5*b*h;
}
int main() 
{
	int l,w;
	double b,h,r;
	
	cout<<"\nEnter Radius of circle ";
	cin>>r;
	
              cout<<"\nEnter Length & width of  rectangle";
	cin>>l>>w;
	
	cout<<"\nEnter base & hieght of  Triangle ";
	cin>>b>>h;
	
              cout<<"\nThe area of circle is: "<<area(r);
	cout<<"\nThe area of rectangle is: "<<area(l,w);
	cout<<"\nThe area of triangle is: "<<area(b,h);
	
	return 0;
	}
