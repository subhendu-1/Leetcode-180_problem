#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    //     int n = nums.size();
        
    //     sort(nums.begin(),nums.end());
      
    //    set<vector<int>> sv;
    //     for(int i=0;i<n;i++)
    //     {
    //         for(int j=i+1;j<n;j++)
    //         {
    
    //             for(int k=j+1;k<n;k++)
    //             { 
                  
    //                int x = (long long)target - 
    //                        (long long)nums[i]-
    //                        (long long)nums[j]-(long long)nums[k];
                   
    //                     if(binary_search(nums.begin()+k+1,nums.end(),x)){
    //                         vector<int> v;
    //                         v.push_back(nums[i]);
    //                         v.push_back(nums[j]);
    //                         v.push_back(nums[k]);
    //                         v.push_back(x);
    //                         sort(v.begin(),v.end());
    //                         sv.insert(v);
    //                     }
    //             }
    //         }
    //     }
    //     vector<vector<int>> res(sv.begin(),sv.end());
    //     return res;







    vector<vector<int>> ans;
    vector<int> path;

    sort(begin(nums), end(nums));
    nSum(nums, 4, target, 0, nums.size() - 1, path, ans);
    return ans;
  }

 private:
  // In [l, r], find n numbers add up to the target
  void nSum(const vector<int>& nums, long n, long target, int l, int r,
            vector<int>& path, vector<vector<int>>& ans) {
    if (r - l + 1 < n || target < nums[l] * n || target > nums[r] * n)
      return;
    if (n == 2) {
      // Very simliar to the sub procedure in 15. 3Sum
      while (l < r) {
        const int sum = nums[l] + nums[r];
        if (sum == target) {
          path.push_back(nums[l]);
          path.push_back(nums[r]);
          ans.push_back(path);
          path.pop_back();
          path.pop_back();
          ++l;
          --r;
          while (l < r && nums[l] == nums[l - 1])
            ++l;
          while (l < r && nums[r] == nums[r + 1])
            --r;
        } else if (sum < target) {
          ++l;
        } else {
          --r;
        }
      }
      return;
    }

    for (int i = l; i <= r; ++i) {
      if (i > l && nums[i] == nums[i - 1])
        continue;
      path.push_back(nums[i]);
      nSum(nums, n - 1, target - nums[i], i + 1, r, path, ans);
      path.pop_back();
    }
    }
};
int main()
{
    Solution obj;
    vector<int> v{1,0,-1,0,-2,2};
    
    vector<vector<int>> sum=obj.fourSum(v,0);
    cout<<"The unique quadruplets are"<<endl;
    for (int i = 0; i < sum.size(); i++) {
        for (int j = 0; j < sum[i].size(); j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }
}