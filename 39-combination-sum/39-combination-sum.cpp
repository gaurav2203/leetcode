class Solution {
public:
    void helper(vector<int>& nums, int target, vector<vector<int>>& ans, vector<int>& temp, int idx){
        if(idx == nums.size()) return;
        if(target == 0) return ans.push_back(temp);
        if(target > 0){
            temp.push_back(nums[idx]);
            helper(nums, target- nums[idx], ans, temp, idx);
            temp.pop_back();
        }
        helper(nums, target, ans, temp, idx+ 1);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        helper(nums, target, ans, temp, 0);
        return ans;
    }
};