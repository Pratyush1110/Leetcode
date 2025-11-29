#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix){
    vector<vector<int>> soln(matrix[0].size(), vector<int>(matrix.size()));

    for(int i=0; i<matrix[0].size(); i++){
        for(int j=0; j<matrix.size(); j++){
            soln[i][j] = matrix[j][i];
        }
    }

    return soln;
}

int main(){
    vector<vector<int>>matrix = {{1,2,3},
                                 {4,5,6}
                                };
    vector<vector<int>>soln = transpose(matrix);

    for(auto it : soln){
        for(auto it1 : it){
            cout << it1 << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    return 0;
}