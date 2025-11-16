#include<bits/stdc++.h>
using namespace std;

int maximumCount(vector<int>& nums){
    int pos=0, neg=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]<0)neg++;
        else if(nums[i]>0)pos++;
    }
    return max(pos, neg);
}

int main(){
    vector<int>nums = {-2,-1,-1,1,2,3};
    int soln = maximumCount(nums);
    cout << soln << endl;
    
    return 0;
}