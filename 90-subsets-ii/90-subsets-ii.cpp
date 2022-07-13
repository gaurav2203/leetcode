class Solution {
public:
    vector<vector<int>> ans;
    
    void helper(vector<int>& nums, vector<int>& temp, int i, int prev){
        if(i == nums.size()) return ans.push_back(temp);
        
        helper(nums, temp, i+ 1, false);
        if(i> 0 && nums[i] == nums[i -1] && prev == false) return;
        
        temp.push_back(nums[i]);
        helper(nums, temp, i+1, true);
        temp.pop_back();
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> temp;
        helper(nums, temp, 0, false);
        return ans;
    }
};