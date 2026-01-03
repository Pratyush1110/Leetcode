#include<bits/stdc++.h>
using namespace std;

string largestOddNumber(string num){
    string ans = "";
    for(int i=num.size()-1; i>=0; i--){
        int k = num[i] - '0';
        if(k%2!=0){
            ans += num.substr(0, i+1);
            break;
        }
    }
    return ans;
}

int main(){
    string num = "123444";
    cout << largestOddNumber(num) << "\n";
    
    return 0;
}