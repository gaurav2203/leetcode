class Solution {
public:
    bool isPowerOfTwo(int n) {
        /*
        //Brute Force
        for( int i =0; i< 31; i++){
            int ans = pow(2, i);
            if( ans == n)
                return true;
        }
        return false;
    */
        
        if(n <= 0)
            return false;
        return (n&(n-1)) == 0;
        
    }
};