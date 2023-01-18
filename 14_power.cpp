#include<bits/stdc++.h>
using namespace std;

    double myPow(double x, int n) {
        double y = pow(x,n);
        return y;
    }

int main(){
    double x;
    int n;
    cin >> x >> n;
    int ans = myPow(x,n);
    cout << ans;
}