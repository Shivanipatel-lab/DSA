/*Given a list of non-negative integers nums, arrange them such that they form the largest number.

Note: The result may be very large, so you need to return a string instead of an integer.

 */

class Solution {
public:
    
    static bool compare(string &s1,string &s2)
    {
        return (s1+s2)>=(s2+s1);
    }
    string largestNumber(vector<int>& nums) {
        
        int x=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                x++;
            }
                
        }
        if(x==nums.size())
            return "0";
        
        vector<string>s(nums.size(),"");
        
        for(int i=0;i<nums.size();i++)
        {
            s[i]=to_string(nums[i]);
        }
        sort(s.begin(),s.end(),compare);
        
        string ans="";
        
        for(int i=0;i<s.size();i++)
        {
            ans+=(s[i]);
        }
        return ans;
    }
};