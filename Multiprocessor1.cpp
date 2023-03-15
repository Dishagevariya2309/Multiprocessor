#include<iostream>
#include<string.h>

using namespace std;
class Message
{
	private:
		char a[];
		
		public:
			Message( char b[])
			{
				strcpy(a,b);
			}
			void print()
			{
				cout<<"ABC"<<endl;
			}
			void print( char b[])
			{
				cout<<a<<" "<<b<<endl;
			}
};
int main()
{
	Message obj("Deep");
	obj.print();
	obj.print("Kamal");
	return 0;
}
