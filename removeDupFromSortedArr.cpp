#include <iostream>
#include <vector>
#include <set>
using namespace std;
// Method-01
  int removeDuplicates(vector<int>& nums) {
         if(nums.size()==0) return 0;
         int res=1;
         for(int i=1;i<nums.size();i++){
             if(nums[i]!=nums[res-1]){
                 nums[res]=nums[i];
                 res++;
             }
         }
         return res;
     }
// method-02 using map
int removeDuplicates(vector<int> &nums)
{
  int size=nums.size();
        set<int>s;
        int i;
        for( i=0;i<size;i++){
            s.insert(nums[i]);
        }
        i=0;
        set<int>::iterator itr;
        for(itr=s.begin();itr!=s.end();itr++){
            nums[i]=*itr;
            i++;  
        }
        for(int j=s.size();j<size;j++){
            nums[j]=0;
        }
       return s.size();
}
   
int main()
{
    vector<int> nums = {0, 0, 1, 2};
    cout << removeDuplicates(nums);
    return 0;
}