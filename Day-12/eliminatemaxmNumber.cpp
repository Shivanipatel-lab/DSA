/*Given an n x n matrix where each of the rows and columns are sorted in ascending order, return the kth smallest element in the matrix.

Note that it is the kth smallest element in the sorted order, not the kth distinct element.Given an n x n matrix where each of the rows and columns are sorted in ascending order, return the kth smallest element in the matrix.

Note that it is the kth smallest element in the sorted order, not the kth distinct element.*/

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
     /*   
        //by binary search 
        int n=matrix.size();
        int low=matrix[0][0];
        int high=matrix[n-1][n-1];
        while(low<high)
        {
            int mid=low+(high-low)/2;
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                cnt += upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
                
            }
            if(cnt<k)
            {
                low=mid+1;
            }
            else
            {
                high=mid;
            }
        }
        return low;
        */
        
        //using max-heap
        priority_queue<int>pq;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix.size();j++)
            {
                pq.push(matrix[i][j]);
                if(pq.size()>k)
                {
                    pq.pop();
                }
            }
        }
        return pq.top();
    }
};