#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define p 31

long long power(int N,int R)
    {
       if(R == 0)
       return 1;
       
       long long int val = (N * power(N, R-1)%MOD)%MOD;
       return val;
    }

int main()
{
    cout << power(12, 21);
    return 0;
}