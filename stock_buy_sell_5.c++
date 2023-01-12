#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int broutForce(vector<int>& prices){
    int n = prices.size();
    int maxProfit=0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(prices[j] > prices[i]){
                maxProfit = max(maxProfit,prices[j]-prices[i]);
            }
            
        }
    }
    return maxProfit;
}

int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxprofit = 0;
        for(int i = 0; i < prices.size(); i++){
           minPrice = min(minPrice,prices[i]);
           maxprofit = max(maxprofit,prices[i]-minPrice);
            
        }
        return maxprofit;
}

int main(){
    vector<int> arr = {7,1,5,3,6,4};
    int maxPro = broutForce(arr);
    cout << "Max profit is: " << maxPro << endl;

}