#include<bits/stdc++.h>
using namespace std;

int numWaterBottles(int numBottles, int numExchange){
    int count = 0;
    int filledBottles = numBottles;
    int emptyBottles = 0;
    while(filledBottles > 0){
        count += filledBottles;
        emptyBottles += filledBottles;
        filledBottles = emptyBottles/numExchange;
        emptyBottles = emptyBottles%numExchange;
    }
    return count;
}

int main(){
    int numBottles = 15, numExchange = 4;
    int soln = numWaterBottles(numBottles, numExchange);
    cout << soln << endl;
    
    return 0;
}