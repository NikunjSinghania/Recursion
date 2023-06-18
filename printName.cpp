#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define p 31

void solve(int n) {
    if(n == 0) return;

    cout << "ABC" << " ";

    solve(n-1);

}

int main()
{
    int n;
    cin >> n;

    solve(n);

    return 0;
}