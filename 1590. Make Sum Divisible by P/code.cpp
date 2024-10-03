class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n=nums.size();
        long long sum=0;
     
        vector<long long>prefixSum=vector<long long>(n);
        long long totalSum=0;
        for(int i=0;i<n;i++){
            totalSum+=nums[i];
        }
        if(totalSum%p==0){
            return 0;
        }
        prefixSum[0]=nums[0];
        for(int i=1;i<n;i++){
            prefixSum[i]=nums[i]+prefixSum[i-1];
        }
        for(int l=0;l<n-1;l++){
            for(int i=0;i+l<n;i++){
                if(i==0){
                    sum=prefixSum[i+l];
                }else{
                    sum=prefixSum[i+l]-prefixSum[i-1];
                }
                if((totalSum-sum)%p==0){
                    return (l+1);
                }
            }
        }
        return -1;
    }
};