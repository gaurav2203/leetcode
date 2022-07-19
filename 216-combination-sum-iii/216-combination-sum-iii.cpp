class Solution {
public:
    void helper(int k, int target, vector<vector<int>>& ans, vector<int>& temp, int idx){
        if(k == 0 && target == 0) return ans.push_back(temp);
        if(k == 0) return;
        
        for(int i= idx; i< 10; i++){
            if(i > target) break;
            temp.push_back(i);
            helper(k- 1, target- i, ans, temp, i+ 1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(k, n, ans, temp, 1);
        return ans;
    }
};