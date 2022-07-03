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

/*
int wiggleMaxLength(vector<int>& nums) {
        int n= nums.size();
        int ans= 0;
        
        for(int i=0; i< n- 1; i++){
            nums[i]= nums[i+ 1]- nums[i];
        }
        int flag;
        int i=0;
        while(i< n){
            if(nums[i]== 0){
                i++;
            }
            else if(nums[i]> 0){
                flag= true;
                break;
                
            }
            else{
                flag= false;
                break;
            }
        }
        
        for(int i=0; i< n- 1; i++){
            if( nums[i]> 0 && flag== true){
                ans++;
                flag= false;
            }
            else if(nums[i]< 0 && flag== false){
                ans++;
                flag= true;
            }
        }
        return ++ans;
    }
*/