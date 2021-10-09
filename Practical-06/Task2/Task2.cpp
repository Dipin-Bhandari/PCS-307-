  
/*
Practical Number: 6
Task 2
*/
#include <bits/stdc++.h>

using namespace std;
 
string isPalindrome(string S)
{
   
    string P = S;
 
    reverse(P.begin(), P.end());
     if (S == P) 
    {
        return "Yes it is a Palindrome\n";
    }
    else 
    {
      	return "No it is not a Palindrome\n";
    }
}
int main()
{
    string S;
    puts("Enter a string:");
    getline (cin, S);
    cout << isPalindrome(S);
    return 0;
}


































