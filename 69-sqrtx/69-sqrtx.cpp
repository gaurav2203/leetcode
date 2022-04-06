class Solution {
public:
    long long int mySqrt(int x) {
        int start= 1;
        int end= x;
        long long int mid= start + (end- start)/2;
        long long int ans=0;
        
        while(start <= end){
            if((mid*mid) < x){
                ans= mid;
                start= mid+1;
            }
            else if((mid* mid) > x){
                end= mid- 1;
            }
            else if((mid* mid) == x){
                return mid;
            }
            mid= start+ (end- start)/2;
        }
        return ans;
    }
};