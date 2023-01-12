// // #include<bits/stdc++.h>
// // using namespace std;

// // int main(){
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         int x,y;
// //         cin >> x >>y;
// //         if((x*3)<=y){
// //             cout << "YES" << endl;
// //         }
// //         else{
// //             cout << "NO" << endl;
// //         }
// //     }
    
// // }



// #include <iostream>
// using namespace std;

// int main() {
// 	int t;
// 	cin >> t;
// 	while(t--){
// 	    string str;
// 	    cin >> str;
//         int flag = 1;
//         for(int i = 0; i < str.size();i++){
//             if(str[i] == '7'){
//                 flag = 0;
//                 break;
//             }
//         }
//         if(flag == 0){
//             cout << "YES" << endl;
//         }
//         else{
//             cout << "NO" << endl;
//         }
// 	}
// 	return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        int ans;
        cin >> x >> y;
        long long int p = pow(10,18);
        for(int i = 1; i < p ; i++){
            if( ((i+y)%x==0) && ((i+x)%y==0)){
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    
}