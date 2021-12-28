#include<iostream>
#include<vector>
using namespace std;
//method-01 naive -->time complexity=o(n2)
void moveZeroes(vector<int>&nums){
for(int i=0;i<nums.size();i++){
    if(nums[i] == 0){
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
            }
        }
    }
}
for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<" ";
}
}
//method-02 efficient -->time complexity=0(n)
void moveZeroes(vector<int>&nums){
    int j=0;
for(int i=0;i<nums.size();i++){
if(nums[i]!=0){
    swap(nums[i],nums[j++]);
}
}
for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<" ";
}

}

int main(){
    vector<int>nums={0,0,1,1,2,2,3};
    moveZeroes(nums);
    return 0;
}