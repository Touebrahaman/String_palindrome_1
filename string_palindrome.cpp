//how to check wheather a string is palindrome or not.
#include<bits/stdc++.h>
using namespace std;
string isPalindrome(string s)
{
    string p=s;
    
    reverse(p.begin(),p.end());
    if(p==s)
    return "it is palindrome";
    else
    return "it isn't palindrome";
}
int main()
{
    string s;
    s="aa aaa aaa aa";
    cout<<isPalindrome(s);
    
}
