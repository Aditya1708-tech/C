#include<iostream>
using namespace std;
int main()
{
	int x=45;
	int *ptr1=&x;
	int **ptr2=&ptr1;
	
	cout<<"\n value of x variable is = "<<x;
	cout<<"\n value of singal pointer is ="<<*ptr1;
	cout<<"\n value of double pointer is ="<<**ptr2;
	
	return 0;
}
