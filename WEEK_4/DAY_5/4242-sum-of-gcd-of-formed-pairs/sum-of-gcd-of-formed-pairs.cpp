class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefixGcd(n);
        int maxSoFar=nums[0];
        for(int i=0;i<n;i++){
            maxSoFar=max(maxSoFar,nums[i]);
            prefixGcd[i]=gcd(nums[i],maxSoFar);
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        long long sum=0;
        int l=0,r=n-1;
        while(l<r){
            sum+=gcd(prefixGcd[l],prefixGcd[r]);
            l++;
            r--;
        }
        return sum;
    }
};