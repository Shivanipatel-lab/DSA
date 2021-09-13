class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    
vector<vector<int>> res;
// just sort the array it takes O(nlogn)
sort(nums.begin(),nums.end());
int n=nums.size();
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
int target_2=target-(nums[i]+nums[j]);

            int low=j+1,high=n-1;
             while(low<high)
             {
                 int result=nums[low]+nums[high];
                 if(result<target_2)
                     low++;
                 else if(result>target_2)
                     high--;
                 else{
                     vector<int> arr(4,0);
                 arr[0]=nums[i];
                 arr[1]=nums[j];
                 arr[2]=nums[low];
                 arr[3]=nums[high];
                 res.emplace_back(arr);
				 //processing the duplicates of number 3
                     while(low<high && nums[low]==arr[2] )++low;
					 //processing the duplicates of number 4
                     while(low<high && nums[high]==arr[3]) --high;
             }
             }
//processing the duplicates of number 2
while(j+1<n && nums[j+1]==nums[j])++j;

        }
		//processing the duplicates of number 1
        while(i+1<n && nums[i+1]==nums[i])++i;
    }
    return res;
    }
};