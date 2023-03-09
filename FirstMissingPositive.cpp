/*Given an unsorted integer array nums, return the smallest missing positive integer.

You must implement an algorithm that runs in O(n) time and uses constant extra space.

 

Example 1:

Input: nums = [1,2,0]
Output: 3
Explanation: The numbers in the range [1,2] are all in the array.
Example 2:

Input: nums = [3,4,-1,1]
Output: 2
Explanation: 1 is in the array but 2 is missing.
Example 3:

Input: nums = [7,8,9,11,12]
Output: 1
Explanation: The smallest positive integer 1 is missing.
 

Constraints:

1 <= nums.length <= 105
-231 <= nums[i] <= 231 - 1*/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       int n=nums.size(),p,q,i=0;
       while(i<n)
       {
           if(nums[i]>0&&nums[i]<=n&&nums[nums[i]-1]!=nums[i])
           {
               p=nums[i];
               q=nums[p-1];
               nums[i]=q;
               nums[p-1]=p;
           }
           else
           i++;
       }
       for(int i=0;i<n;i++)
       if(i+1!=nums[i])
       return i+1;
       return n+1;
        

    }
};
