class Solution {
public:
    static bool myfunc(vector<int> &a, vector<int> &b){
        return a[1]> b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), myfunc);
        
        int total= 0;
        for(auto box: boxTypes){
            int x= min(box[0], truckSize);
            total += x* box[1];
            truckSize -= x;
            if(!truckSize)
                break;
        }
        return total;
    }
};