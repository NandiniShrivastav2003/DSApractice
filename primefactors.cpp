#include <iostream>
#include <vector>
using namespace std;
// bool prime(int n)
// {

//     if (n == 1)
//         return false;
//     if (n == 2 || n == 3)
//         return true;
//     if (n % 2 == 0 || n % 3 == 0)
//     {
//         return false;
//     }
//     for (int i = 5; i * i <= n; i = i + 6)
//     {
//         if (n % i == 0 || n % (i + 2) == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// void primeFactors(int n)
// {
//     vector<int> nums;
//     int i=2;
//    while(n!=1){
// if(prime(i) && n % i == 0){
// nums.push_back(i);
// n=n/i;
// }
// if(n%i !=0){
//     i++;
// }
//    }
//    for(int i=0;i<nums.size();i++){
//        cout<<nums[i]<<" ";
//    }

// }
//using sieve of erathosenes
// void prime1toN(int n)
// {
//     vector<int> arr(n, 0);
//     for (int i = 2; i*i < n; i++)
//     {
//         for(int j=i+1; j < n;j++){
//             if(j%i == 0){
//                 arr[j]=1;
//             }
//         }

//     }
//     for(int i=2;i<n;i++){
//         if(arr[i] == 0){
//             cout<<i<<" ";
//         }
//     }
// }
void bitDemo(unsigned int x, unsigned int y)
{
    cout << (x & y) << " " << (x | y) << " " << (x ^ y) << endl;
    cout << (x << y) << " " << (x >> y) << " " << (~x) << " " << (~y) << endl;
}
void countSetBits(int n)      //time complexity of thisd naive solution is O(n) --->where n is total no of bits
{
    int c = 0;
    int res=n;
    
    while(res>0){
    if ((res) & 1 == 1)
    {
        c++;
    }
     res=res>>1;
    }
    cout << c << endl;
}
int main()
{
     int x;
    cin >> x ;
    // prime1toN(n);
    // bitDemo(x,y);
    countSetBits(x);
    return 0;
}