#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums){
    vector<vector<int>>ans;
    set<vector<int>>st;
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            for(int k=j+1; k<nums.size(); k++){
                if((nums[i]+nums[j]+nums[k]==0)){
                    vector<int>temp = {nums[i], nums[j], nums[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    for(auto it : st){
        ans.push_back(it);
    }
    return ans;
}

int main(){
    vector<int>nums = {-1,0,1,2,-1,-4};
    vector<vector<int>>soln = threeSum(nums);
    for(auto it : soln){
        for(auto it1 : it){
            cout << it1 << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}