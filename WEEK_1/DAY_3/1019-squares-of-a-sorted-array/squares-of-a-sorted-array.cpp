class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int left=0,right=n-1,index=n-1;
        while(left<=right){
             long long l=nums[left]*nums[left];
             long long r=nums[right]*nums[right];
            if(l>r){
                ans[index]=l;
                left++;
            }
            else{
                ans[index]=r;
                right--;
            }
                index--;
        }
        return ans;
    }
};