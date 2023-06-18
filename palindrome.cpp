#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define p 31
int isPalindrome(string S)
	{
	    for(int i=0;i<S.size()/2;i++) {
	        if(S[i] != S[S.size()-i-1])
	        return 0;
	    }
	    return 1;
	}
int main()
{
    string s;
    cin >> s;

    cout << isPalindrome(s);

    return 0;
}