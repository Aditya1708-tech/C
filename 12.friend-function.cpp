//friend function in cpp
#include<iostream>
using namespace std;
class Rishabh;

class Anish
{
private:
int money=10; //1
friend void Rohit(Rishabh,Anish);   //3
};
class Rishabh
{
private:
int money=20; //2
friend void Rohit(Rishabh,Anish); //3

};
void Rohit(Rishabh r1,Anish a1)
{
cout<<"sum="<<r1.money+a1.money;
}
int main()
{
Anish obj1;
Rishabh obj2;
Rohit(obj2,obj1);

return 0;
}
