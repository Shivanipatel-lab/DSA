/*
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       
        int idx=digits.size()-1;
        while(idx>=0)
        {
            if(digits[idx]==9)
                digits[idx]=0;
            else
            {
                digits[idx]+=1;
                return digits;
            }
            idx--;
        }
        digits.insert(digits.begin(),1);
        return digits;
        
    }
};