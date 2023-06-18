#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define p 31

long long solve(long long int N) {
        if(N == 0) return 0;
        
        long long int sum = solve(N-1);
        
        long long pval = pow(N,3);
        return pval + sum;
}

int main()
{
    int n;
    cin >> n;

    cout << solve(n);

    return 0;
}