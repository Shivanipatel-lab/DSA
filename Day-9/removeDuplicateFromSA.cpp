class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size();
        
        int size=0;
        int cnt=1;
        if(n==0)
            return 0;
        
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[size])
            {
                size++;
                nums[size]=nums[i];
                cnt=1;
            }
            else if(cnt<2)
            {
                size++;
                nums[size]=nums[i];
                cnt++;
            }
                
        }
        return size+1;
        
    }
};