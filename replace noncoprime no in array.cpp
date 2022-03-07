vector<int> replaceNonCoprimes(vector<int> &nums)
{
    vector<int> fin;
    stack<int> s;
    s.push(nums[0]);
    for (int i = 1; i < nums.size(); i++)
    {
        long long res = nums[i];
        while (!s.empty())
        {
            long long gc = gcd(res, s.top());
            if (gc == 1)
            {
                break;
            }
            res = lcm(res, s.top());
            s.pop();
        }
        s.push(res);
    }

    while (!s.empty())
    {
        fin.push_back(s.top());
        s.pop();
    }
    reverse(fin.begin(), fin.end());
    return fin;
}