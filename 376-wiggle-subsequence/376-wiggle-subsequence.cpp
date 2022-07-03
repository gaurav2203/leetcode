class Solution {
public:
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
};