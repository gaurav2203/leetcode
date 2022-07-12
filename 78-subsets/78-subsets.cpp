class Solution {
public:
    vector<vector<int>> ans;
    
    void helper(vector<int> &nums, int i, vector<int>& temp){
        if(i == nums.size()){
            ans.push_back(temp);
            return;
        }
        helper(nums, i+ 1, temp); //not incl ith ele
        
        temp.push_back(nums[i]);  //incl ith ele
        helper(nums, i+ 1, temp);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        helper(nums, 0, temp);
        return ans;
    }
};