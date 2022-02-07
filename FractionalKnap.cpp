#include <bits/stdc++.h>
#include <utility>
using namespace std;
bool myCmp(pair<int, int> a, pair<int, int> b)
{
    double r1 = (double)a.second / a.first;
    double r2 = (double)b.second / b.first;
    return r1 > r2;
}
double fknaps(int w, pair<int, int> arr[], int n)
{
    sort(arr, arr + n, myCmp);
    double res = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].first <= w)
        {
            res += arr[i].second;
            w = w - arr[i].first;
        }
        else
        {
            res += arr[i].second * w / arr[i].first;
            break;
        }
    }
    
    return res;
}
int main()
{
    pair<int, int> arr[] = {{30,120}, {20,100}, {10,60}};
    int n = 3;
    int w = 25;
    cout << fknaps(w, arr, n);
    return 0;
}
