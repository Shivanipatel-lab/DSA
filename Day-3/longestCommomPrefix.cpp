class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
      int m=INT_MAX;
      if(strs.size()==0)
          return "";
        string c=strs[0];//store flower
        for(int i=1;i<strs.size();i++)
        {
            int j=0;
            int k=0;
            int ans=0;
            while(j<c.size() and k<strs[i].size())
            {
                if(c[j]==strs[i][k])
                    ans++;
                else
                    break;
                j++;
                k++;
            }
            m=min(m,ans);
        }
        return c.substr(0,m);
    }
};