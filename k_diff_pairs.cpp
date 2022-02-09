int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int prev;
        int high=nums.size()-1;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
         if(prev == nums[i]){continue;}
            int n=nums[i]+k;
            //searching if k+nums[i] is in array
            if(binary_search(nums.begin()+i+1,nums.end(),n)){
                m[nums[i]]=n; //if found add to hash table
            }
           prev=nums[i];
               
        }
        return m.size();
    }