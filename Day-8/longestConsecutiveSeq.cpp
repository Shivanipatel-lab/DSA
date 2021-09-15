class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        
        //by hasing
        //create a hashset
        set<int> hashSet;
        
        //iterate nums array
        
        for(int num:nums)
        {
            //insert num in hashset
            
             hashSet.insert(num);
        }
        
        int ls=0;//longer streak
        for(int num:nums)
        {
            if(!hashSet.count(num-1)) //check the num like 100 ,so 99 is exist or not
            {
                int currentNum=num;
                int currentStreak=1;
                
                while(hashSet.count(currentNum+1))//check for 100,so 101 is exist or not
                {
                    currentNum += 1;
                    currentStreak += 1;
                }
            
            
            ls=max(ls,currentStreak);
            }
                
        }
        return ls;
        
        
    }
};