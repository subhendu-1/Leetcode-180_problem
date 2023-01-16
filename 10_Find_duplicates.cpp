#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>&nums){
    int n = nums.size();
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(nums[i] == nums[i+1]){
            ans = nums[i];
            break;
        }
    }
    return ans;
}


int Using_frequenceyArray(vector<int>&nums){
    int n = nums.size();
    vector<int>freqence_Array(n+1,0);
    for(int i = 0; i < n; i++ ){
        if(freqence_Array[nums[i]] == 0){
            freqence_Array[nums[i]] = 1;
        }
        else{
            return nums[i];
        }
    }
}
int main(){
     vector<int>arr;
     arr = {1,3,5,2,2};
     int ans = Using_frequenceyArray(arr);
     cout << ans;
    
}