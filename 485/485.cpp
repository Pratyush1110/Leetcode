#include<bits/stdc++.h>
using namespace std;

/*
    0 0 1 1 0 1 1 1 0 1
    0 1 2 3 4 5 6 7 8 9 
*/

int findMaxConsecutiveOnes(vector<int>& nums){
    int maximum = 0;
    int count = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==1){
            count++;
            maximum = max(maximum, count);
        }else{
            count = 0;
        }
    }

    return maximum;
}

int main(){
    vector<int>ans = {1,1,0,1,1,1,0,1,1};
    int result = findMaxConsecutiveOnes(ans);
    cout << result << endl;

    return 0;
}