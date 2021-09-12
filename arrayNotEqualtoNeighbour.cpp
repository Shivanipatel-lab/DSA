class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       
        int n = nums.size();
         vector<int> res(n);
        sort(nums.begin(),nums.end());
        int i,k;
        for( i=0,k=0;i<n;i+=2,k++)
        {
            res[i]=nums[k];
        }
        for( i=1;i<n;i+=2,k++)
        {
            res[i]=nums[k];
        }
        return res;
    }
};