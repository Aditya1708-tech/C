#include<iostream>
using namespace std;
void add(int a , int b)
{
	cout<<"\n Addition= "<<a+b;
}

void add(int a , int b , int c)
{
	cout<<"\n Addition= "<<a+b+c;
}

int main()
{
	add(2,3);
	add(1, 5, 6);
	getch();
	return 0;
}


