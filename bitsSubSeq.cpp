#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007


vector<int> genSubSeq(vector<int> arr) {
    int k = 1;
        int temp = 1;
        int sum = 0;
        vector<int> strSum;
        strSum.push_back(0);
        for(int i=1;i<=pow(2,arr.size())-1; i++) {
            temp = i;
            sum = 0;
            for(int j=0;j<arr.size();j++) {
                if(k & temp){
                    sum += arr[j];
                }
                
                temp = temp >> 1;
            }
            strSum.push_back(sum);
        }
    return strSum;
}

#define p 31
int main()
{
    vector<int> arr = {5, 2, 1};

    vector<int> subSeqs = genSubSeq(arr);

    for(auto x : subSeqs)
        cout << x << " ";

    return 0;
}