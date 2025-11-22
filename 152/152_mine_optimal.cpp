#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums){
    int prod = 1, revProd = 1;
    int ans = INT_MIN, revAns = INT_MIN, maxDigit = INT_MIN;

    for (int i = 0; i < nums.size(); i++) {
        prod *= nums[i];
        ans = max(ans, prod);
        if (prod == 0)
            prod = 1;

        revProd *= nums[nums.size() - 1 - i];
        revAns = max(revAns, revProd);
        if (revProd == 0)
            revProd = 1;

        maxDigit = max(maxDigit, nums[i]);
    }
    
    return max({ans, revAns, maxDigit});
}

int main(){
    vector<int>nums = {-1,-2,-3,0};
    int soln = maxProduct(nums);
    cout << soln << endl;
    
    return 0;
}