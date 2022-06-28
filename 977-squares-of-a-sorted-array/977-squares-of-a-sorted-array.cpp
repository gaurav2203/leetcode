class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        
        int l= 0;
        int r= nums.size()- 1;
        int ptr= nums.size()-1;
        while( l<=r ){
            if(abs(nums[l]) > abs(nums[r])){
                ans[ptr]= (nums[l]* nums[l]);
                l++;
                ptr--;
            }
            else if(abs(nums[l]) < abs(nums[r])){
                ans[ptr]= (nums[r]* nums[r]);
                r--;
                ptr--;
            }
            else{
                ans[ptr]= (nums[l]* nums[l]);
                //ans.push_back(nums[r]* nums[r]);
                //r--;
                l++;
                ptr--;
            }
        }
        return ans;
    }
};