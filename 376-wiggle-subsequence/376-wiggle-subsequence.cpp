class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n= nums.size();
        if(n <= 1)
            return n;
        
        int up= 1;
        int down= 1;
        
        for(int i=1; i< n; i++){
            if(nums[i] > nums[i- 1]){
                //uphill case
                up= down+ 1;
            }
            else if(nums[i] < nums[i- 1]){
                //downhill case
                down= up+ 1;
            }
        }
        return max(up, down);
    }
};