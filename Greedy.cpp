//problem-01
// Input: num = 310
// Output: 103
// Input: num = -7605
// Output: -7650
long long smallestNumber(long long num)
{
    string s = to_string(num);
    long long res;
    if (s[0] == '-')
    {
        for (int i = 1; i < s.size(); i++)
        {
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[i] < s[j])
                {
                    swap(s[i], s[j]);
                }
            }
        }
    }
    else
    {
        sort(s.begin(), s.end());
        if (s[0] == '0')
        {
            int i = 1;
            while (s[i] == '0')
            {
                i++;
            }
            swap(s[0], s[i]);
        }
    }
    stringstream obj; // for converting string  to int
    obj << s;
    obj >> res;
    return res;
}
*******************************************************
//problem - 02 
// Input: people = [3,2,2,1], limit = 3
// Output: 3
// Explanation: 3 boats (1, 2), (2) and (3)

// int numRescInput: people = [3,5,3,4], limit = 5
// Output: 4
// Explanation: 4 boats (3), (3), (4), (5)ueBoats(vector<int> &people, int limit)
{
    sort(people.begin(), people.end());
    int left = 0;
    int right = people.size() - 1;
    int count = 0;
    while (left <= right)
    {
        if (people[left] + people[right] <= limit)
        {
            count++;
            left++;
            right--;
        }
        else
        {
            count++;
            right--;
        }
    }
    return count;
}