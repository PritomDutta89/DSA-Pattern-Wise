// 560. Subarray Sum Equals K

class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int prefSum = 0, curr=0;

        for(int i=0;i<a.size();i++)
        {
            prefSum = prefSum+a[i];

            if(mp.find(prefSum-k) != mp.end())
            {
                curr = curr+mp[prefSum-k];
            }

            mp[prefSum]++;
        }

        return curr;
    }
};