// 303. Range Sum Query - Immutable

class NumArray {
    vector<int> prefixSum;
public:
    NumArray(vector<int>& nums) {
        int i;

        for(i=1;i<nums.size();i++)
        {
            nums[i] = nums[i-1]+nums[i];
        }
        prefixSum = nums;
    }
    
    int sumRange(int left, int right) {
        if(left==0)
           return prefixSum[right];
        else
          return prefixSum[right]-prefixSum[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */