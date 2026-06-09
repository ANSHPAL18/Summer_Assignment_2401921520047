class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int l=0,maxlength=0;
        for(int i=0;i<s.size();i++){
            if(mp.count(s[i])&&mp[s[i]]>=l){
                l=mp[s[i]]+1;
            }
            mp[s[i]]=i;
            maxlength=max(maxlength,i-l+1);
        }
        return maxlength;
    }
};