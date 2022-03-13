 int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        bool one=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1){
                     one=true;
                }
            if(nums[i] > n || nums[i] <=0){
             nums[i] =1; 
            }   
        }
        if(one == false){
            return 1;
        }
        for(int i=0;i<nums.size();i++){
           nums[abs(nums[i]) -1] =-abs(nums[abs(nums[i])-1]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                return i+1;
            }
        }
        return n+1;
    }