#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string a, int k)
{

    string temp = "";
    int flag = 1;
    vector<pair<char, int>> st;
    for (int i = 0; i < a.size(); i++)
    {
        if (st.empty() || st.back().first != a[i])
        {
            st.push_back({a[i], 1});
        }
        else
        {
            ++st.back().second;
            if (st.back().second == k)
            {
                st.pop_back();
            }

        }
    }
  for(auto it:st){
      for(int i=1;i<=it.second;i++){
          temp+=it.first;
      }
  }
  return temp;
   
}
int main()
{
    cout << removeDuplicates("pbbcggttciiippooaais", 2);
    return 0;
}