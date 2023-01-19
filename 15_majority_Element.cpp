#include<bits/stdc++.h>
using namespace std;

int majority_element(vector<int>&nums){
    int n = nums.size();
    int limt = n/2;
    int count = 0;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(nums[i] == nums[j]){
                count++;
            }
        }
        if(count > limt){
            return nums[i];
        }
    }
}


int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            if(num==candidate) count += 1; 
            else count -= 1; 
        }

        return candidate;
}
int main(){
    vector<int>arr;
    arr = {1,2,1,1,1,2,2};
    cout << majority_element(arr);
}