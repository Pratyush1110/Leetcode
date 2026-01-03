#include<bits/stdc++.h>
using namespace std;

string removeOuterParantheses(string s){
    string result = "";
    int level = 0;

    for(char ch : s){
        if(ch == '('){
            if(level > 0) result += ch;
            level++;
        }else if(ch == ')'){
            level--;
            if(level > 0) result += ch;
        }
    }
    return result;
}

int main(){
    string s = "(()())(())";
    cout << removeOuterParantheses(s) << "\n";
    
    return 0;
}