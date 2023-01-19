#include<bits/stdc++.h>
using namespace std;

    double myPow(double x, int n) {
        double y = pow(x,n);
        return y;
    }

    double linear_Pow(double x,long long int n){
        long long int ans = 1;
        // for(int i = 0; i < n; i++){
        //     ans = ans * x;
        // }
        // return ans;

        if(n < 0){
            n = n * (-1);
            for(int i = 0; i < n; i++){
            ans = ans * x;
            }
            // return ans;
            ans = 1/ans;
            return ans;
        }else{
             for(int i = 0; i < n; i++){
                  ans = ans * x;
             }
             return ans;
        }
    }



int main(){
    double x;
    int n;
    cin >> x >> n;
    // int ans = myPow(x,n);
    int ans = linear_Pow(x,n);
    cout << ans;
}