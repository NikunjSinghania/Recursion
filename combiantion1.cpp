#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define p 31

void solve(vector<int> arr, int target, vector<int> temp, set<vector<int>>& res) 
{
    if(target == 0) {
        sort(temp.begin(), temp.end());
        res.insert(temp);
        return;
    }

    if(target < 0) {
        return;
    }

    for(int i=0;i<arr.size();i++) {
        temp.push_back(arr[i]);
        solve(arr, target-arr[i], temp, res);
        temp.pop_back();
    }

}

int main()
{
    vector<int> arr = {2,3,5};
    int target = 8;
    vector<int> temp;
    set<vector<int>> res;
    solve(arr, target, temp, res);

    for(auto x : res) {
        for(auto y : x) {
            cout << y << " ";
        }
        cout << endl;
    }

    return 0;
}