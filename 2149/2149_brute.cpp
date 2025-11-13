#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums){
    vector<int> pos, neg, ans;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) {
            pos.push_back(nums[i]);
        } else {
            neg.push_back(nums[i]);
        }
    }
    for (int i = 0; i < pos.size(); i++) {
        ans.push_back(pos[i]);
        ans.push_back(neg[i]);
    }
    return ans;
}

int main(){
    vector<int>ans = {3,1,-2,-5,2,-4};
    ans = rearrangeArray(ans);
    for(auto it : ans){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}