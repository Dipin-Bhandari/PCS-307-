#include<iostream>
using namespace std;
int main()
{
    int i=0,n,temp=0;
	puts("Enter a Number:");
	cin>>n;
	for(i=2;i<=(n/2);i++)
	{
		if(n%i==0)
		{
		temp=1;
		break;
		}
	}
	if(temp==1)
		cout<<"Number "<<n<<" is not a prime number"<<endl;
	else
		cout<<"Number "<<n<<" is a prime number"<<endl;

	} 


























	