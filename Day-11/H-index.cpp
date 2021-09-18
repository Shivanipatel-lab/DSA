/*
Given an array of integers citations where citations[i] is the number of citations a researcher received for their ith paper, return compute the researcher's h-index.

According to the definition of h-index on Wikipedia: A scientist has an index h if h of their n papers have at least h citations each, and the other n − h papers have no more than h citations each.

If there are several possible values for h, the maximum one is taken as the h-index.*/
class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        //sort the citations(0,1,3,5,6)
        sort(citations.begin(),citations.end());
        //store citations in n
        int n=citations.size();
        //create index i
        int i;
        //iterate the loop 
        for( i=1;i<=n;i++)
            
        //if n=6 and i=5 -> 6-5=1 <5 so its break the loop
            
            if(citations[n-i]<i)
                break;
        
        return i-1;
    }
};