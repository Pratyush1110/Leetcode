#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s){
    string result = "";
    int i = s.size() - 1;

    while (i >= 0) {
        while (i >= 0 && s[i] == ' ')
            i--;
        if (i < 0)
            break;

        int j = i;
        while (i >= 0 && s[i] != ' ')
            i--;

        string word = s.substr(i + 1, j - i);

        if (result.size() == 0)
            result = word;
        else
            result += " " + word;
    }

    return result;
}

int main(){
    string s = "the sky is blue";
    cout << reverseWords(s) << "\n";
    
    return 0;
}