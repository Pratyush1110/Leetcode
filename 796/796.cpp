#include<bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal){
    s = s + s;
    if(s.find(goal) == string::npos) return false;
    return true;
}

int main(){
    string s = "abcde";
    string goal = "cedab";
    if(rotateString(s, goal))cout << "True" << endl;
    else cout << "False" << endl;
    
    return 0;
}