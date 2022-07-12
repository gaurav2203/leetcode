class Solution {
public:
    bool helper(vector<int>& matchsticks, vector<int>& visited, int target,int curr_sum, int i, int k){
        if(k == 1) return true;
        
        if(curr_sum == target) return helper(matchsticks, visited, target, 0, 0, k- 1);
        
        for(int j= i; j< matchsticks.size(); j++){
            if(visited[j] || curr_sum+ matchsticks[j] > target) continue;
            visited[j] = true;
            if(helper(matchsticks, visited, target, curr_sum+ matchsticks[j], j+ 1, k)) return true;
            visited[j]= false;
        }
        return false;
    }
    bool makesquare(vector<int>& matchsticks) {
        int sum= accumulate(matchsticks.begin(), matchsticks.end(), 0);
        //sort(matchsticks.begin(), matchsticks.end());
        if(sum %4 != 0 || matchsticks.size() < 4) return false;
        vector<int> visited(matchsticks.size(), false);
        
        return helper(matchsticks, visited, sum/4, 0, 0, 4);
    }
};