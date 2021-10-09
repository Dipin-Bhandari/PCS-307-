  
/*
Practical Number: 6
Task 4
*/
#include <bits/stdc++.h>

using namespace std;
 void relationalOperation(string s1, string s2)
{
 
    if (s1 != s2)
    {
        cout << s1 << " is not equal to " << s2 << endl;
        if (s1 > s2)
            cout << s1 << " is greater than " << s2 << endl;
        else
            cout << s2 << " is greater than " << s1 << endl;
    }
    else
        cout << s1 << " is equal to " << s2 << endl;
}
 // Driver code
int main()
{
    string s1;
    puts("Enter string s1:");
    getline(cin,s1);
    string s2;
    puts("Enter string s2:");
    getline(cin,s2);
    relationalOperation(s1, s2);
    return 0;
}



























