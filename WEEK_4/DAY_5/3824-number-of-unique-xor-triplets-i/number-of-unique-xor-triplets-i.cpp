class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        if(nums.size()<=2) return nums.size();
        int ans=1;
        for(int i=0;i<nums.size();i++){
            if(ans>nums.size()) break;
            ans*=2;
        }
        return ans;

    }
};