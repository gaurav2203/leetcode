class Solution {
public:
    void helper(int k, int target, vector<int> mapper, vector<vector<int>>& ans, vector<int>& temp, int idx){
        if(k == 0 && target == 0) return ans.push_back(temp);
        if(k == 0) return;
        
        for(int i= idx; i< mapper.size(); i++){
            if(mapper[i] > target) break;
            temp.push_back(mapper[i]);
            helper(k- 1, target- mapper[i], mapper, ans, temp, i+ 1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> mapper= {1, 2, 3, 4, 5, 6, 7, 8, 9};
        vector<vector<int>> ans;
        vector<int> temp;
        helper(k, n, mapper, ans, temp, 0);
        return ans;
    }
};