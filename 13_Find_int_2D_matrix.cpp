#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j <matrix[i].size();j++){
                if(matrix[i][j] == target){
                    return true;
                    break;
                }
            }
        }
}

bool Using_binary_search(vector<vector<int>>&matrix,int target){
    int lo = 0;
    int hi = matrix.size()*matrix[0].size()-1;

    if(!matrix.size()){
        return false;
    }


    while (lo <= hi){
    int mid = lo + (hi-lo)/2;
        if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]  == target){
            return true;
        }
        else if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]  < target){
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }
  
    return false;
}
int main(){
    vector<vector<int>>arr;
    arr = {{1,4,5,7},{9,10,13,15},{19,20,21,29}};
    int targate = 3;
    // bool x =  searchMatrix(arr,targate);
    bool x =  Using_binary_search(arr,targate);
    if(1){
        cout << "true";
    }
    else{
        cout << "flase";
    }
}