
#include<iostream>
using namespace std;

int main()
{
    char a='A';
	bool b=0;
	short int c=20;
	int d=100;
	long int e=1200;
	float g=6.96;
	double h=2.666668;
	long double k=20.19999;
	wchar_t t  = L'A';

	cout << "Size of char : " << sizeof(char)<< " byte" << "\nsize of char variable: "<< sizeof(a)<<" byte"<<endl;

    cout << "Size of bool : " << sizeof(bool) << " byte" << "\nsize of bool variable: "<< sizeof(b)<<" byte"<<endl;

	cout << "Size of short int : " << sizeof(short int) <<" bytes" << "\nsize of short int variable: "<< sizeof(c)<<" bytes"<<endl;

	cout << "Size of int : " << sizeof(int) << " bytes" << "\nsize of int variable: "<< sizeof(d)<<" bytes"<<endl;

	cout << "Size of long int : " << sizeof(long int) << " bytes" << "\nsize of long int variable: "<< sizeof(e)<<" bytes"<<endl;

	cout << "Size of float : " << sizeof(float)  << " bytes" <<"\nsize of float variable: "<< sizeof(g)<<" bytes"<<endl;

	cout << "Size of double : " << sizeof(double) << " bytes" << "\nsize of double variable: "<< sizeof(h)<<" bytes"<<endl;
	
	cout << "Size of long double : " << sizeof(long double) << " bytes" << "\nsize of long double variable: "<< sizeof(k)<<" bytes"<<endl;

	cout << "Size of wide char : " << sizeof(wchar_t) << " bytes" <<"\nsize of widechar variable: "<< sizeof(t)<<" bytes"<<endl;
	
	return 0;
}



























