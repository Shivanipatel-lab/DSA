class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       /* int n=nums.size();
        int j=0;
        if(n==1)
            return 0;
       for(int i=0;i<n;i++)
       {
           if(i==0 && nums[i]>nums[i+1])
           {
               return i;
           }
           else if(i==n-1 && nums[i]>nums[i-1])
           {
               return i;
           }
           else
           {
               if(i!=0 && i!=n-1 && nums[i]>nums[i-1]&&nums[i]>nums[i+1])
                   return i;
           }
       }
        
        return j;
        */
        int left=0,right=nums.size()-1;
        while(left<right)
        {
            int mid=(left+right)/2;
            if(nums[mid]>nums[mid+1])
                right=mid;
            else
                left=mid+1;
        }
        return left;
        
    }
};