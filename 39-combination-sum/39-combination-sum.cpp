class Solution {
private:
    void finalCombination(int start, int target, vector<int>& arr, vector<vector<int>>& _final, vector<int>& _temp){
        if(start == arr.size()){
            if(target == 0)
                _final.push_back(_temp);
            return;
        }
        
        if(arr[start] <= target){
            _temp.push_back(arr[start]);
            finalCombination(start, target- arr[start], arr, _final, _temp);
            _temp.pop_back();
        }
        finalCombination(start+ 1, target, arr, _final, _temp);
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> _final;
        vector<int> _temp;
        
        finalCombination(0, target, candidates, _final, _temp);
        return _final;
    }
};