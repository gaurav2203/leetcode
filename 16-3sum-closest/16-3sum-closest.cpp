class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n= nums.size();
        int diff= INT_MAX;
        int val= 0;
        sort(nums.begin(), nums.end());
        for(int i=0; i< n; i++){
            int a= nums[i];
            int start= i+1;
            int end= n-1;
            
            while(start < end){
                int sum=a  + nums[start]+ nums[end];
                if(abs(diff) > abs(target- sum)){
                        diff= target-sum;
                        val= sum;
                    }
                if(sum < target){
                    start++;
                    
                }
                else{
                    end--;
                }
            }
        }
        return val;
    }
};