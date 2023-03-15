#include<iostream>
#include<string.h>
using namespace std;

class Redandwhite
{
	public:
	void rw1()
	{
		cout<<"1:- 0 Arguument  "<<endl;	
	}
	void rw2(int bw)
	{
		cout<<"2:- 1 Arguument  "<<bw<<endl;
	}
	void rw3(int bw,int bw1)
	{
		cout<<"3:- 2 Arguument  "<<bw<< " " <<bw1<<endl;
	}
	void rw4(int bw,int bw1,int bw2)
	{
		cout<<"3:- 2 Arguument  "<<bw<< " " <<bw1<<" "<<bw2<<endl;
	}
};

int main()
{
	Redandwhite yw;
	yw.rw1();
	yw.rw2(10);
	yw.rw3(20,30);
	yw.rw4(40,50,60);
	return 0;
}
