#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    if (n == 0) {
        return;
    }
    vector<int> ans;
    for (int i = 0; i < m; i++) {
        ans.push_back(nums1[i]);
    }
    for (int i = 0; i < n; i++) {
        ans.push_back(nums2[i]);
    }
    sort(ans.begin(), ans.end());
    nums1 = ans;
}

int main(){
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};

    merge(nums1, 3, nums2, 3);

    for (auto it : nums1)
        cout << it << " ";
    cout << endl;
    
    return 0;
}

