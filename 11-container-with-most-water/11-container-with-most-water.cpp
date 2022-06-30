class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int left= 0;
        int right= n- 1;
        int maxi= 0;
        
        while(left < right){
            int h= min(height[left], height[right]);
            int w= right- left;
            
            maxi= max(maxi, h* w);
            
            if( height[left] == min(height[left], height[right])){
                left++;
            }
            else if(height[right] == min(height[left], height[right])){
                right--;
            }
            else{
                left++;
                right--;
            }
        }
        return maxi;
    }
};