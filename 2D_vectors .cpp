// define the 2D vector with different sizes of column 
// input :5 rows 
// 2 ,3,4,5,1 column in each row 

#include<bits/stdc++.h>
using namespace std;
int main (){

    array<int,5> a1={2,3,4,5,1};

     vector <vector <int >> v1;
     for(int i =0;i< a1.size();i++){
        for (int j=0; j < v1[a1[i]] ; j++){
              v1[i].push_back(j);
        }
     }
    return 0;
}