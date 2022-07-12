class Solution {
public:
    vector<vector<int>> ans;
    
    void helper(vector<int>& nums, int i){
        if(i == nums.size()- 1) return ans.push_back(nums);
        
        for(int j= i; j< nums.size(); j++){
            swap(nums[i], nums[j]);
            helper(nums, i+1);
            swap(nums[i], nums[j]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        helper(nums, 0);
        return ans;
    }
};