//LEETCODE 189 - ROTATE ARRAY

#include<bits/stdc++.h>
using namespace std;

/*
    o => 1 2 3 4 5 6 7
    4 => 4 5 6 7 1 2 3
*/

void rotate(vector<int>& nums, int k){
    int n = nums.size();
    reverse(nums.begin(), nums.begin()+k);
    reverse(nums.begin()+k, nums.end());
    reverse(nums.begin(), nums.end());
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    rotate(nums, 4);
    for(auto it : nums){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}