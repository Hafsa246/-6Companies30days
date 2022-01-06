// Minimum Size Subarray Sum

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mini = INT_MAX, n = nums.size(), sum = 0, left = 0;
        
        for(int i = 0; i < n; i++){
            sum += nums[i];
            while(sum >= target){
                mini = min(mini, i+1-left);
                sum -= nums[left];
                left++;
            }
        }
        
        return (mini == INT_MAX) ? 0 : mini;
    }
};