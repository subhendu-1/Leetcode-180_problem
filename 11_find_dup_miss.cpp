#include <bits/stdc++.h>
using namespace std;


pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    pair<int,int>ans;
	vector<int>freq(n,0);
    int count = 0;
    for(int i = 0; i < n; i++){
        if(freq[arr[i]] == 0){
            freq[i] = count++;
        }
        else if(freq[arr[i]]==1)
        ans.first=freq[i]
    }

    for(int j = 0; j < n; j++){
        if(freq[j] == 0){
            ans.first = freq[j];
        }
        else if(1>freq[j]){
            ans.second = freq[j];
        }
    }
    return ans;
	
}

int main(){
    vector<int>arr;
    int n = arr.size();
    for(int i = 0; i < n; i++){
        arr.push_back(i);
    }

    // cout <<  missingAndRepeating(arr,n);
    
}