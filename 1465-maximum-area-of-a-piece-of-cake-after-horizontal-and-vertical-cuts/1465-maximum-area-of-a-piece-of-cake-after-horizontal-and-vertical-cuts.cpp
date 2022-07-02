class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        
        horizontalCuts.insert(horizontalCuts.begin(), 0);
        verticalCuts.insert(verticalCuts.begin(), 0);
        
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);
        
        long max_horizontal= INT_MIN;
        long max_vertical= INT_MIN;
        
        for(int i=horizontalCuts.size()- 2; i>=0; i--){
            long temp= horizontalCuts[i+1]- horizontalCuts[i];
            max_horizontal= max(max_horizontal, temp);
        }
        for(int i=verticalCuts.size()- 2; i>= 0; i--){
            long temp= verticalCuts[i+1]- verticalCuts[i];
            max_vertical= max(max_vertical, temp);
        }
        return (max_horizontal*max_vertical)% 1000000007;
    }
};