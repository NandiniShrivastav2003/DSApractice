class TwoSum {
public:
vector<int>nums;
    void add(int number) {
       nums.push_back(number);
    }
    bool find(int value) {
   sort(nums.begin(),nums.end());
   int n=nums.size();
     int left=0, right=n-1;
        while(left<right){
            if(nums[left]+nums[right] == value){
                return true;
            }
            else if((nums[left]+nums[right])>value){
                right--;
            }
            else{
                left++;
            }
        }
    return false;
    }
};