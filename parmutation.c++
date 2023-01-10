#include<bits/stdc++.h>
using namespace std;


void parumtaion(vector<int>&nums){
    int n = nums.size(),m,l;
    for(m = n-2; m >= 0; m--){
        if(nums[m] < nums[m+1]){
            break;
        }
    }

    if(m < 0){
        reverse(nums.begin(),nums.end());
    }
    else{
        for(l = n-1; l > m; l--){
            if(nums[l] > nums[m]){
                break;
            }
        }
        swap(nums[m],nums[l]);
        reverse(nums.begin()+m+1,nums.end());
    }
}
int main(){

    vector<int>arr;
    arr = {2,3,1};
    parumtaion(arr);
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

}