#include <iostream>
#include <vector>
using namespace std;
vector<string> summaryRanges(vector<int> &nums)
{
    if (nums.size() == 0)
    {
        return {};
    }
    if (nums.size() == 1)
    {
        return {to_string(nums[0])};
    }
    vector<string> res;
    int first = nums[0];
    int last = first;
    int i = 1;
    while (i < nums.size())
    {
        while (i < nums.size() && (long long int)nums[i] - (long long int)nums[i - 1] == 1)
        {
            last = nums[i];
            i++;
        }
        if (first != last)
        {
            res.push_back(to_string(first) + "->" + to_string(last));
            if (i < nums.size())
            {
                first = last = nums[i];
            }
        }
        else
        {
            res.push_back(to_string(first));
            if (i < nums.size())
            {
                first = last = nums[i];
            }
        }
        i++;
    }

    if (first != last)
    {
        res.push_back(to_string(first) + "->" + to_string(last));
    }
    else
    {
        res.push_back(to_string(first));
    }
    int n = res.size() - 1;
    if (res[n] == res[n - 1])
    {
        res.pop_back();
    }
    return res;
}
int main(){
    vector<int>nums={0,1,2,4,5,7};
    vector<string>out=summaryRanges(nums);
for(string i:out){
    cout<<i<<" ";

}
return 0;
}