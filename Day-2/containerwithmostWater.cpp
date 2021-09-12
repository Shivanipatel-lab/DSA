class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxarea=0;
        int left=0;
        int right=height.size()-1;
        while(left<right)
        {
            int area=min(height[left],height[right])*(right-left);
            maxarea=max(maxarea,area);
            if(height[left]<height[right])
                left++;
            else
                right--;
        }
        return maxarea;
    }
};