class Solution {
public:
    int candy(vector<int>& ratings) {
        // We break the problem into two sub- problems.
        // First we check the condition for the left elements.
        // Then we check the condition for the right elements.
        // We sum the max of both the vectors to get our answer.
        int n= ratings.size();
        vector<int> left(n, 1);
        vector<int> right(n, 1);
        
        for(int i=1; i< n; i++){
            if(ratings[i- 1]< ratings[i] )
                left[i]= left[i- 1]+ 1;
        }
        for(int i=n- 2; i>= 0; i--){
            if(ratings[i] > ratings[i+1])
                right[i]= right[i+ 1]+ 1;
        }
        int answer= 0;
        for(int i=0; i< n; i++){
            answer+= max(left[i], right[i]);
        }
        return answer;
    }
};