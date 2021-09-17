/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.*/

//using stl library

class Solution {
public:
    int majorityElement(vector<int>& nums) {
      
        
        //by using nth stl library we get the majority element.
        nth_element(begin(nums),begin(nums)+nums.size()/2,end(nums));
        return nums.at(nums.size()/2);
        
    }
};

