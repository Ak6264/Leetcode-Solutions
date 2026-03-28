class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> runningSum(nums.size());
        int sum;
        sum = nums[0];
        runningSum[0]=nums[0];
        for(int i=1; i<nums.size(); i++){
        sum+=nums[i];
        runningSum[i]=sum;
        }
        return runningSum;
    }
};
