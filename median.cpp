double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        if(n>m){
            return findMedianSortedArrays(nums2,nums1);
        }
        int low=0;
        int high=n;
        while(low<=high){
            int mid1=low+(high-low)/2;
            int mid2=(n+m)/2-mid1;
            int lo1=mid1 == 0?INT_MIN:nums1[mid1-1];
            int lo2=mid2 == 0?INT_MIN:nums2[mid2-1];
            int hi1=mid1 == n?INT_MAX:nums1[mid1];
            int hi2=mid2 == m?INT_MAX:nums2[mid2];
            if(lo1>hi2){
                high=mid1-1;
            }
            else if(lo2>hi1){
                low=mid1+1;
            }
            else{
                if((n+m) % 2 == 0){
                    return (float)(max(lo1,lo2)+min(hi1,hi2))/2;
                }
                else{
                    return min(hi1,hi2);
                }
            }
        }
        return 2;
    }