class Solution {
public:
    int gcdCalc(int a,int b){
        while(b!=0){
            int t=a%b;
            a=b;
            b=t;
        }
        return a;
    }
    int findGCD(vector<int>& nums) {
        int mn=nums[0],mx=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<mn) mn=nums[i];
            if(nums[i]>mx) mx=nums[i];
        }
        return gcdCalc(mn,mx);
    }
};