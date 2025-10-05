// 525. Contiguous Array

class Solution {
public:
    int findMaxLength(vector<int>& a) {
        unordered_map<int, int> mp;
        int i;
        int prefixSum = 0, currValue=0, maxLength = 0;

        for(i=0;i<a.size();i++)
        {
            currValue = a[i]==0 ? -1 : a[i];
            prefixSum = prefixSum+currValue;

            if(prefixSum==0)
            {
                maxLength = max(maxLength, i+1);
            }
            else if(mp.find(prefixSum) != mp.end())
            {
                maxLength = max(maxLength, i-mp[prefixSum]);
            }

            if(mp.find(prefixSum) == mp.end()) // i want longest length, so if present dont update the data
              mp[prefixSum] = i;
        }

        return maxLength;
    }
};