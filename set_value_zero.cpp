#include<bits/stdc++.h>
using namespace std;
 int main (){
    int row;
    cin>> row;
    int col;
    cin>> col;
    int arr[row][col];
    // taking the value in the matrices 
for( int i =0; i<row ; i++){
    for(int j=0;j<col ; j++){
  cin>> arr[i][j];
    }
 }
 vector< int > row1 ; 
 vector <int > col1;

// check the index where the value is zero 
  for ( int i =0; i<row ; i++){
    for ( int j =0 ;j<col ; j++ ){ 
        if(arr[i][j]==0){
        row1.push_back(i);
        col1.push_back(j);
        continue;
        }
    }
  }
  for(auto i : row1){
    cout<< row1[i];
  }
for ( int i =0; i<row ; i++){
    for ( int j =0 ;j<col ; j++ ){ 
       
        }
    }



    return 0;
 }