#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t){
    int map_s[256] = {0};
    int map_t[256] = {0};

    int n = s.length();

    for (int i = 0; i < n; i++) {
        if (map_s[s[i]] != map_t[t[i]]) {
            return false;
        }

        map_s[s[i]] = i + 1;
        map_t[t[i]] = i + 1;
    }
    
    return true;
}

int main(){
    if(isIsomorphic("foo", "bar")){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }
    
    return 0;
}