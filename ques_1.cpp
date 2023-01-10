#include<bits/stdc++.h>
using namespace std;

// void setZeros(vector<vector<int>> &matricx){
//     int row = matricx.size();
//     int col = matricx[0].size();

//     for(int i = 0; i < row; i++){
//         for(int j = 0; j < col; j++){
//             if(matricx[i][j] == 0){

//                 int ind = i - 1;
//                 while (ind >= 0)
//                 {
//                     if(matricx[ind][j] != 0){
//                         matricx[ind][j] = -1;
//                     }
//                     ind--;
//                 }


//                 ind = i+1;
//                 while (ind < col)
//                 {
//                     if(matricx[ind][j] != 0){
//                         matricx[ind][j] = -1;
//                     }
//                     ind++;
//                 }



//                 ind = j - 1;
//                 while (ind >= 0)
//                 {
//                     if(matricx[i][ind] != 0){
//                         matricx[i][i] = -1;
//                     }
//                     ind--;
//                 }


//                 ind = j+1;
//                 while (ind < col)
//                 {
//                     if(matricx[i][ind] != 0){
//                         matricx[i][ind] = -1;
//                     }
//                     ind++;
//                 }
                
                
//             }
//         }
//     }
// for(int i = 0; i < row;i++){
//     for(int j = 0; j < col; j++){
//         if(matricx[i][j] <= 0){
//             matricx[i][j] = 0;
//         }
//     }
// }
// }




// second approch:

void setzero2(vector<vector<int>>&matrix){
    int row = matrix.size(), col = matrix[0].size();
    vector<int>dummy1(row,-1),dummy2(col,-1);

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(matrix[i][j] == 0){
                dummy1[i] = 0;
                dummy2[j] = 0;
            }
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(dummy1[i] == 0 || dummy2[j] == 0){
                matrix[i][j] = 0;
            }
        }
    }
}


int main(){
    vector<vector<int>>arr;
    arr = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    // setZeros(arr);
    setzero2(arr);


    cout << "Final matrix is " << endl;
    
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
        
    }
    
}






