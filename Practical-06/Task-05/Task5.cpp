  
/*
Practical Number: 6
Task 5
*/

#include <bits/stdc++.h>

using namespace std;
int main()
{   
   string s1,s2;

	puts("Enter string 1:");
	cin>>s1;
    puts("Enter string 2:");
	cin>>s2;

	int x = s1.compare(s2);
    if(x==0)
		cout<<"string S1 and string S2 are equal"<<endl;
	else if(x>0)
		cout<<"string S1 is Larger than string S2"<<endl;
	else if(x<0)
		cout<<"string S1 is smaller than string S2"<<endl;
	else
		cout<<"strings didn't match"<<endl;  //default condition 


     int z=0,n1=s1.length(),n2=s2.length();
	 char a[n1+1],b[n2+1];
	strcpy(a, s1.c_str());
    strcpy(b, s2.c_str());
    z=strcmp(a,b); 
    cout<<"\n ASCII Difference Between two characters :"<<z<<endl;
  
}





























