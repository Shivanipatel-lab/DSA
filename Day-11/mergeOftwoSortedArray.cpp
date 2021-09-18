/*Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 */

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
      int n = nums1.size();
    int m = nums2.size();
    
    vector<double> nums3;
    
    for(int i=0;i<n;i++){
        nums3.push_back(nums1[i]);
    }
    
    for(int i=0;i<m;i++){
        nums3.push_back(nums2[i]);
    }
    
    sort(nums3.begin(),nums3.end());
    
    int k = nums3.size();
    double res = 0;
    
    if(k%2 == 0){
        
        int idx = k/2;
        res = (nums3[idx] + nums3[idx-1])/2;
        
    }else{
        int idx = k/2;
        res = nums3[idx];
    }
    return res;   
    }
};