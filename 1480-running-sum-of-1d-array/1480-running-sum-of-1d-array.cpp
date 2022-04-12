class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int prev_sum=0;
        for(int i=0; i< nums.size(); i++){
            prev_sum += nums[i];
            ans.push_back(prev_sum);
        }
        return ans;
    }
};