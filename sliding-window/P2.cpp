// 3. Longest Substring Without Repeating Characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int left=0, right=0, maxL=0;
       vector<bool> v(256, false);

       for(right=0;right<s.length();right++)
       {
            while(v[s[right]])
            {
                v[s[left]]=false;
                left++;
            }
            v[s[right]] = true;
            maxL = max(maxL, right-left+1);
       }

       return maxL;
    }
};
