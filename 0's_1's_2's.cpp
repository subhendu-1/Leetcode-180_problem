#include<bits/stdc++.h>
using namespace std;

void sortArray(vector<int>&array,vector<int>&arr){
    int n = array.size();
    int min = INT_MAX;
    for(int i = 0; i < n; i++ ){
        if(array[i]<min){
            min = array[i];
            arr.push_back(min);
        }

    }
    
}

int main(){
    vector<int>array;
    array = {1,1,0,0,2,2};
    vector<int>arr;
    sortArray(array,arr);
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}