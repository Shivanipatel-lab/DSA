class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n=nums.size();
        int a=0;
        for(int i=0;i<n;i++)
        {
            a = a^nums[i];
        }
        return a;
        /*for(int i=0;i<n;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                return nums[i];
            }
            else
            {
                i++;
            }
        }
        return 0;*/
        
        
    }
};