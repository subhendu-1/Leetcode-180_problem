#include<bits/stdc++.h>
using namespace std;
int reversePairs(vector<int>& nums) {
    int n = nums.size();
    int count = 0;
       for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++ ){
                    if(nums[i] > 2 * nums[j]){
                        count++;
                    }
            }
       }
       return count; 
}


int main(){

    vector<int>nums;
    nums = {2,4,3,5,1};
    cout << reversePairs(nums);

}