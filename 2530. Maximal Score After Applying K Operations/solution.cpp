class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
       priority_queue<int>pq;
       for(int i=0;i<nums.size();i++){
        pq.push(nums[i]);
       }
       long long score=0;
       while(k--){
        score+=pq.top();
        double temp=pq.top();
        pq.pop();
        pq.push(ceil(temp/3));
       }
        return score;
    }
};