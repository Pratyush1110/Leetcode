#include<bits/stdc++.h>
using namespace std;

/*
    80 100 20 40 60
    0  1   2  3  4
*/
bool check(vector<int>& nums){
    int n = nums.size();
    int count_breaks = 0;

    for(int i = 0; i < n; i++){
        if(nums[i] > nums[(i+1) % n]){
            count_breaks++;
            if(count_breaks > 1) return false;
        }
    }

    return true;
}

int main(){
    vector<int> nums = {6, 10, 6};
    if(check(nums)){
        cout << "True";
    }else{
        cout << "False";
    }

    return 0;
}