#include<bits/stdc++.h>
using namespace std;


int sub_arrayBrut(vector<int>&nums,vector<int>arr){
    int n = nums.size();
    int i,j;
    int sum_max = INT_MIN;

    if(n == 1){
        return nums[0];
    }
    for( i = 0; i < n-1; i++){
        for(j = i; j < n -1; j++ ){
            int sum = 0;
            for(int k = i; k < j; k++){
                sum = sum + nums[k];
                if(sum > sum_max ){
                    arr.clear();
                    sum_max = sum;
                    arr.push_back(i);
                    arr.push_back(j);
                }
            }
        }
    }
    return sum_max;
}

void sub_array(vector<int>&nums){
    int n = nums.size();
    int temp_sum = 0;
    int max_sum = INT_MIN;
    int s = 0;
    for(int i = 0; i < n; i++){
        temp_sum+=nums[i];

        if(temp_sum<0){
            temp_sum = 0;
            s =i+1;
        } 
        
        else if(temp_sum>max_sum){
            max_sum = temp_sum;
            
        }
    }
}
int main(){
  vector<int> arr{-2,1,-3,4,-1,2,1,-5,4};
  vector < int > subarray;
  int lon = sub_arrayBrut(arr, subarray);
  cout << "The longest subarray with maximum sum is " << lon << endl;
  cout << "The subarray is " << endl;
  for (int i = subarray[0]; i <= subarray[1]; i++) {
    cout << arr[i] << " ";
  }
}