#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums){
    if(nums.size()==0) return 0;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int cnt = 0;
    int longest = 1;
    int lastSmaller = INT_MIN;
    for(int i=0; i<n; i++){
        if(nums[i]-1 == lastSmaller){
            cnt++;
            lastSmaller = nums[i];
        }else if(lastSmaller != nums[i]){
            cnt = 1;
            lastSmaller = nums[i];
        }
        longest = max(longest, cnt);
    }
    return longest;
}

int main(){
    vector<int>ans = {100,4,200,1,3,2};
    int soln = longestConsecutive(ans);
    cout << soln << endl;

    return 0;
}