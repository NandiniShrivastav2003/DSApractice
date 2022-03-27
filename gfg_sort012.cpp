//Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
//input:12
//o/p:0 1 1 0 1 2 1 2 0 0 0 1
void sort012(int a[], int n)
    {
     int low=0;
     int mid=0;
     int high=n-1;
     while(mid<=high){
         if(a[mid] == 0){
           
             swap(a[low],a[mid]);
             mid++;
             low++;
         }
         else if(a[mid] == 1){
             mid++;
         }
         else{
             
             swap(a[mid],a[high]);
             high--;
            
         }
     }
    }