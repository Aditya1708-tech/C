#include<iostream>
using namespace std;
class sample
{
    public:
		virtual void display()
		{
			cout<<"\nsample class display";
		}
};
class Test:public sample
{
	public:
		void display()
		{
			cout<<"\n Test class display";
		}
};
int main()
{
	sample *p;
	Test obj;
	
	p=&obj;
	p->display();
	
	return 0;
}
