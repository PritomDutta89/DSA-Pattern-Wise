// QS1: Kth Largest Element in an Array

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;

         for(int i=0;i<nums.size();i++)
         {
            pq.push(-1 * nums[i]);
            if(pq.size()>k)
            {
                pq.pop();
            }
         }

         return -1 * pq.top();
    }
};