#include<bits/stdc++.h>
using namespace std;
string isPalindrome(string s)
{
	for(int i=0;i<s.length()/2;i++)
	{
		if(s[i] != s[s.length()-i-1])
		{
			return "it isn't' palindrome";
		}
		
	}
	return "it is palindrome";
}
int main()
{
	string s;
	s="abba";
	cout<<isPalindrome(s);
}


