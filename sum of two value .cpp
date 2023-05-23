 #include<bits/stdc++.h>
 using namespace std;
 
 
 vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr(nums.size());
        for(int i =0; i< nums.size();i++){
           
          for( int j =0; j< nums.size();j++){
          if (nums[i]+nums[j]==target){
           
                     }
          }
        }
        return arr;
    }
    int main( ){
        vector <int > nums ={2,7,11,15};
         int target =9;
         vector <int> youu = twoSum(nums,target );
          for (auto i: youu ){
            cout<< youu[i];
          }
    }