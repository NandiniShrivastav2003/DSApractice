#include <iostream>
#include <vector>
using namespace std;
bool prime(int n)
{

    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}
void primeFactors(int n)
{
    vector<int> nums;
    int i=2;
   while(n!=1){
if(prime(i) && n % i == 0){
nums.push_back(i);
n=n/i;
}
if(n%i !=0){
    i++;
}
   }
   for(int i=0;i<nums.size();i++){
       cout<<nums[i]<<" ";
   }

}
int main()
{
    int n;
    cin>>n;
    primeFactors(n);
    return 0;
}