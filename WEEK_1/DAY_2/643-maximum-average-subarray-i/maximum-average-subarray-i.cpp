class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
         int n=nums.size();
         long long sum=0;
         for(int i=0;i<k;i++){
             sum+=nums[i];
         }
         double maxim=(double)sum/k;
         for(int i=k;i<n;i++){
            sum+=nums[i]-nums[i-k];
            double avg=(double)sum/k;
            if(maxim<avg){
                maxim=(double)sum/k;
            }
         }
         return maxim;
    }
};