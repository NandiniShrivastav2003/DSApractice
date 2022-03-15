// naive approach (using map)TC 0(n2)
vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    unordered_map<int, int> m;
    vector<int> res;
    int flag = 0;
    for (int i = 0; i < nums2.size(); i++)
    {
        m[nums2[i]] = i;
    }
    for (int i = 0; i < nums1.size(); i++)
    {
        int ind = m[nums1[i]];
        flag = 0;
        for (int j = ind + 1; j < nums2.size(); j++)
        {
            if (nums2[j] > nums1[i])
            {
                flag = 1;
                res.push_back(nums2[j]);
                break;
            }
        }
        if (flag == 0)
        {
            res.push_back(-1);
        }
    }
    return res;
}
// efficient approach(using monotanic stack) TC :- 0(n)
vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    unordered_map<int, int> m;
    stack<int> s;
    vector<int> res;
    for (int i = 0; i < nums2.size(); i++)
    {
        while (s.size() && s.top() < nums2[i])
        {
            m[s.top()] = nums2[i];
            s.pop();
        }
        s.push(nums2[i]);
    }
    for (int i = 0; i < nums1.size(); i++)
    {
        res.push_back(m[nums1[i]] > 0 ? m[nums1[i]] : -1);
    }
    return res;
}