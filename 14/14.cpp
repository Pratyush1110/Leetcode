#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs){
    if (strs.empty())
        return "";

    string result = "";
    int index = 0;

    while (true) {
        if (index >= strs[0].length())
            return result;
        char currentChar = strs[0][index];
        for (int i = 1; i < strs.size(); i++) {
            if (index >= strs[i].length() ||
                strs[i][index] != currentChar) {
                return result;
            }
        }
        result += currentChar;
        index++;
    }
    return result;
}

int main(){
    vector<string>strs = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(strs) << "\n";
    
    return 0;
}