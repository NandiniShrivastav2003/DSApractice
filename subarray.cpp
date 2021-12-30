#include <iostream>
#include <vector>
#include <set>
using namespace std;
// subarray with 0 sum naive:o(n2) solution
 int subarraySum(vector<int>&s){
 int sum;
 for(int i=0;i<s.size();i++){
     sum=0;
     for(int j=i;j<s.size();j++){
         sum+=s[j];
         if(sum == 0){
            return 1;
         }
         else{
             continue;
         }
     }
 }
 return -1;
 }
// subarray with 0 sum-Efficient solution -02  0(n) solution
  int subarraySum(vector<int>&nums){
   set <int> s;

 int preSum=0;
 for(int i=0;i<nums.size();i++){

     preSum+=nums[i];
     cout<<preSum<<" ";
     if(s.find(preSum) != s.end()){
         return 1;
     }
     if(preSum == 0){
         return 1;
     }
     s.insert(preSum);
 }
 return -1;
 }
//variation=subarray with given sum 0(n) solution
int subarraywithgivenSum(vector<int> &nums,int gsum)
{
    set<int> s;
    int preSum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        preSum += nums[i];
        s.insert(preSum);
    }
     for ( auto itr=s.begin();itr != s.end();itr++) {
     if(s.find(*itr-gsum ) != s.end()){
         return 1;
     }
     if(gsum == *itr){
         return 1;
     }
    }
    return -1;
}
int main()
{
    vector<int> num = {15,2,8,10,-5,-8,6};
    cout << subarraywithgivenSum(num,-9);
    return 0;
}