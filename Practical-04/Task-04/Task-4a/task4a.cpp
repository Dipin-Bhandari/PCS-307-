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

cout<<add(5,2.5)<<endl;

cout<<add(5.2,2)<<endl;
cout<<add(5,2)<<endl;
	


}












































