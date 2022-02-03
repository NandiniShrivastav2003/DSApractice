class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        unordered_map<int,int>s;
        for(int i=0;i<nums.size();i++){
            if(s.find(target-nums[i]) != s.end()){
               
                    res.push_back(s[target-nums[i]]);
                     res.push_back(i);
              
            }
            else{
                s[nums[i]]=i;
            }
        }
        return res;
    }
};