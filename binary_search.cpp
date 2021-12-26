#include<iostream>
using namespace std;
bool binary_Search(int arr[],int n,int element){
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid] == element){
            cout<<"element found at index : "<<mid<<endl;
            return true;
        }
        else if(arr[mid]>element){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
       
    }
     return false;
}
int main(){
    int arr[]={10,55,70,90,150};
    int n=5;
    int element;
    cin>>element;
   if(binary_Search(arr,n,element)){
      cout<<"found"; 
   }
   else{
       cout<<"not found";
   }
    return 0;
}