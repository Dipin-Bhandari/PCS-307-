  
/*
Practical Number: 6
Task 3b
*/
#include <bits/stdc++.h>
using namespace std;
 void reverse(string str)
{
   for (int i=str.length()-1; i>=0; i--)
      cout << str[i];
}
 
int main(void)
{    
    string s;
    puts("Enter string:");
    getline(cin,s);
    reverse(s);
    cout<<"\n";
    return (0);
}














