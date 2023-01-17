#include<bits/stdc++.h>
using namespace std;

// int findDuplicate(vector<int>&nums){
//     int n = nums.size();
//     int ans = 0;
//     for(int i = 0; i < n; i++){
//         if(nums[i] == nums[i+1]){
//             ans = nums[i];
//             break;
//         }
//     }
//     return ans;
// }


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


// int linkdlist_cycle_method(vector<int>&nums){
//     int slow = nums[0];
//     int first = nums[0];
//     do
//     {
//         slow = nums[slow];
//         first = nums[nums[first]];
//     } while (slow!=first);

//     first = nums[0];
//     while (slow!=first) 
//     {
//         slow = nums[slow];
//         first = nums[first];
//     }
//     return first;
    
    
// }


int findDuplicate(vector < int > & nums) {
  int slow = nums[0];
  int fast = nums[0];
  do {
    slow = nums[slow];
    fast = nums[nums[fast]];
  } while (slow != fast);
  fast = nums[0];
  while (slow != fast) {
    slow = nums[slow];
    fast = nums[fast];
  }
  return slow;
}
int main(){
     vector<int>arr;
     arr = {1,3,5,2,2};
     int ans = findDuplicate(arr);
     cout << ans;
    
}