#include<iostream>
#include<string.h>
using namespace std;
class A
{
	public:
	void fruits()
	{
		cout<<"Chiku"<<endl;
	}
			
};
class C
{
	public:
	void fruits()
	{
		cout<<"Orange"<<endl;
	}
};
class B : public A , public C
{
	public:
	void fruits()
	{
		cout<<"Mango"<<endl;
		A a1;
		a1.fruits();
		C c1;
		c1.fruits();
		
	}
			
};
int main()
{
	B b1;
	b1.fruits();
	
	return 0;
}
