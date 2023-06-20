#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define p 31

void genSubSeqUnique(vector<int> arr, vector<int> seq, set<vector<int>> &unq, int index) {
    if(index == arr.size()) {
       // sort(seq.begin(), seq.end());
        unq.insert(seq);
        return;
    }

    seq.push_back(arr[index]);
    genSubSeqUnique(arr, seq,unq, index+1);

    seq.pop_back();
    genSubSeqUnique(arr, seq,unq, index+1);
}

int main()
{
    vector<int> arr = {4, 4, 4, 1, 4};
    vector<int> seq;

    set<vector<int>> unq;

    sort(arr.begin(), arr.end());
    genSubSeqUnique(arr, seq, unq, 0);

    for(auto x : unq) {
        for(int i = 0; i < x.size(); i++) {
            cout << x[i] << " ";
        }
        cout <<endl;
    }

    return 0;
}