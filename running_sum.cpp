#include <iostream>
#include <vector>
using namespace std;
 vector<int> runningSum(vector<int>& nums) {
        vector<int>res={nums[0]};

        for(int i=1;i<nums.size();i++){
            res.push_back(res[i-1]+nums[i]);
        }
        return res;
    }
    int main(){
        vector<int>s={1,2,3,4};
        vector<int>out=runningSum(s);
        for(int i:out){
            cout<<i<<" ";
        }
        return 0;
    }