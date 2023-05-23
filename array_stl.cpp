#include<bits/stdc++.h>
using namespace std;
int main (){
    array<int, 5> arr{{1,5,4,6,1}};
    array<int , 5> arr2 = {12,34,4,4,5};
    array<string ,2> arr3 ={ "a ","b"};
     cout << "size of the array is : ";
// for the size of the array 
     cout<< arr.size()<< endl;
     cout<< arr2.size() << endl;
     cout<< arr3.size()<<endl;
    //  traversal of the array  
     for(auto i:arr){
        cout<< i<< " ";
    }
    // for filling the value in  the entire array  ;
    arr2.fill(15); 
cout<< endl;
for(auto i:arr2){
        cout<< i<< " ";
    }
    cout<< endl;
     for( auto i:arr3){
        cout<< i<<" ";
     }

     cout<< endl;
// for sorting the array in ascending or desending order 
     sort(arr.begin(),arr.end());
     for(auto i: arr){
        cout<< i <<" ";
     }
    return 0 ; 

}