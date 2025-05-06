#include<iostream>
using namespace std;
class sample
{
              int x;
	public:
	sample()
	{
		x=0;
	}
	void operator++()
	{
		x++;
	}
	void operator--()
	{
		x--;
	}
	void display()
	{
		cout<<"\nx= "<<x;		
	}
};
int main()
{
	sample obj;
	
	obj.display();
	++obj;
	++obj;
	obj.display();
	--obj;
	obj.display();
	
	return 0;
}
