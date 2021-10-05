#include <iostream>
using namespace std;


namespace first
{
	int add(int a,int b)
	{
		return a+b;
	}
}
namespace second

{
	

	float add(float a,float b)
	{
		return a+b;
	}
}
int main()
{
	int w1= first::add(5,2);
	float w2=second::add(3.2,2.1);
 cout<<"Sum of Entered Numbers is: \nw1="<<w1<<"\nw2="<<w2<<endl;
}








































