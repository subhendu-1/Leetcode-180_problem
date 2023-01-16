#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
using namespace std;

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int>ans;
    n = arr.size();
    sort(arr.begin(),arr.end());

    for(int i = 1; i<n; i++){
        if(arr[i]!=i){
            ans.first = arr[i];
        }
    }
    for(int i = 1; i <= n; i++){
        if(arr[i] == arr[i+1]){
            ans.second = arr[i];
        }
    }
	
}


int main(){

}