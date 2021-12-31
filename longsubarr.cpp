#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
int longSum(vector<int> &nums, int sum)
{
   map<int, int> m;
    int pre_sum = 0, res = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        pre_sum += nums[i];
        if (pre_sum == sum)
        {
            res = i + 1;
        }
        if (m.find(nums[i]) == m.end())
        {
            m.insert({pre_sum, i});
        }
        if (m.find(pre_sum - sum) != m.end())
        {
            res = max(res, i - m[pre_sum - sum]);
        }
    }
    return res;
}
int main(){
    vector<int>nums={8,3,1,5,-6,6,2,2};
     cout<<longSum(nums,4);
    return 0;
}