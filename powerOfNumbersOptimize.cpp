#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define p 31

long long power(int N,int R)
    {
      if(R == 0)
        return 1;

        if(N == 0)
        return 0;

        if(R == 1)
        return N%MOD;

        if(R%2 == 0) {
            long long int val = power(N, R/2);
            return (val%MOD * val%MOD)%MOD;
        }
        else {
            long long int val = power(N, R/2);
            return ((val%MOD * val%MOD)%MOD * N)%MOD;
        }
        
    }

int main()
{
    long long int n;
    cin >> n;

    long long int r;
    cin >> r;

    cout << power(n, r);

    return 0;
}