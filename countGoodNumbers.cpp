#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define p 31

    long long int power(int N, long long int R) {
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

    int countGoodNumbers(long long n) {
        long long int val = power(20, n/2);
        if(n%2 == 0)
        return val%MOD;
        else
        return (val * 5)%MOD;
    }

int main()
{
    long long int n;
    cin >> n;

   cout <<  countGoodNumbers(n);
}

