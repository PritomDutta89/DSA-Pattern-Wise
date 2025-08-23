// 643. Maximum Average Subarray I

class Solution {
public:
    double findMaxAverage(vector<int>& v, int k) {
        int sum=0, maxSum=0;

        for(int i=0;i<k;i++)
        {
            sum += v[i];
        }

        maxSum = sum;

        for(int i=k;i<v.size();i++)
        {
            sum -= v[i-k];
            sum += v[i];
            maxSum = max(maxSum, sum);
        }

        return double(maxSum)/k;
    }
};