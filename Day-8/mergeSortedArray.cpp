class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i=0,j=0;
       vector<int> nums;
        while(i<=(m-1)&&j<=(n-1))
        {   
            if(nums1[i]<nums2[j])
            {
                nums.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i]>=nums2[j])  
            {
                nums.push_back(nums2[j]);
                j++;
            }
        
        }
            while(i<m&&j>=n)
            {
                nums.push_back(nums1[i]);
                i++;
            }   
            while(j<n&&i>=m)  
            {
                nums.push_back(nums2[j]);
                j++;
            }
         nums1.clear();
         for(int i=0;i<(m+n);i++)
        {
             nums1.push_back(nums[i]);
        }
        
        
    }
};