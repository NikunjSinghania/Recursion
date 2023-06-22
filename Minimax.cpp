#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define p 31

bool check(vector<vector<char>> arr) {
    if((arr[0][0] == '0' && arr[0][1] == '0') && (arr[0][1] == '0' && arr[0][2] == '0'))
    return true;

    if((arr[1][0] == '0' && arr[1][1] == '0') && (arr[1][1] == '0' && arr[1][2] == '0'))
    return true;
    
    if((arr[2][0] == '0' && arr[2][1] == '0') && (arr[2][1] == '0' && arr[2][2] == '0'))
    return true;
    
    if((arr[0][0] == '0' && arr[1][0] == '0') && (arr[1][0] == '0' && arr[2][0] == '0'))
    return true;
    
    if((arr[0][1] == '0' && arr[1][1] == '0') && (arr[1][1] == '0' && arr[2][1] == '0'))
    return true;
    
    if((arr[0][2] == '0' && arr[1][2] == '0') && (arr[1][2] == '0' && arr[2][2] == '0'))
    return true;
    
    if((arr[0][0] == '0' && arr[1][1] == '0') && (arr[1][1] == '0' && arr[2][2] == '0'))
    return true;
    
    if((arr[0][2] == '0' && arr[1][1] == '0') && (arr[1][1] == '0' && arr[2][0] == '0'))
    return true;

    return false;
}

int solve(vector<vector<char>> arr) {
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(arr[i][j] == ' ') {
                arr[i][j] = '0';
                if(check(arr))
                return 10;
                solve(arr);
            }
        }
    }
}

int main()
{
    vector<vector<char>> arr = {
                                {'-', '-', '0'},
                                {'-', '0', '0'},
                                {' ', ' ', '-'}
                               };


    solve(arr);
    //cout << check(arr);
    return 0;
}