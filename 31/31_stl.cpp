#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums){
    next_permutation(nums.begin(), nums.end());
}

int main(){
    vector<int>ans = {1,1,5};
    nextPermutation(ans);
    cout << endl;
    for(auto it : ans){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}