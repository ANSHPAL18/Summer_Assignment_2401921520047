class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int st=0,end=0,len=0;
        while(end<nums.size()){
            mp[nums[end]]++;
            while(mp[nums[end]]>k&&st<=end){
                mp[nums[st]]--;
                st++;
            }
            len=max(len,end-st+1);
            end++;
        }
        return len;
    }
};