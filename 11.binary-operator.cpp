#include<iostream>
using namespace std;
class Complex
{
            int real,img;
	public:
	void read()
	{
		cout<<"Enter real & img part: ";
		cin>>real>>img;
	}	
	Complex operator+(Complex a)
	{
		Complex t;
		t.real=real+a.real;
		t.img=img+a.img;
		return t;
               }
	void display()
	{
		cout<<"\n"<<real<<"+"<<img<<"i";
	}
};
int main()
{
	Complex c1,c2,c3;
	c1.read();
	c2.read();
	c3=c1+c2;     //c3=c1.operator+(c2)
	c1.display();
	c2.display();
	cout<<"\nAddition:- ";
	c3.display();
	
	return 0;
}
