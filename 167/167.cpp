#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    map<int, int>mpp;
    for(int i=0; i<numbers.size(); i++){
        int a = numbers[i];
        int b = target - a;
        if(mpp.find(b) != mpp.end()){
            return {mpp[b]+1, i+1};
        }
        mpp[a] = i;
    }
    return {};
}

int main(){
    vector<int>nums = {1,2,3,4,5,6,7,8,9};
    vector<int>soln = twoSum(nums, 14);
    for(auto it : soln){
        cout << it << " ";
    }
    cout << endl;
    
    return 0;
}