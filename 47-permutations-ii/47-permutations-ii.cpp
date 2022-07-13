class Solution {
public:
    vector<vector<int>> ans;
    
    void helper(vector<int>& nums, int i){
        if(i == nums.size()) return ans.push_back(nums);
        
        unordered_set<int> s;
        for(int j= i; j< nums.size(); j++){
            if(s.find(nums[j]) != s.end()) continue;
            s.insert(nums[j]);
            swap(nums[i], nums[j]);
            helper(nums, i+1);
            swap(nums[i], nums[j]);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        helper(nums, 0);
        return ans;
    }
};