class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
for(int i=0;i<nums.size();i++){
sum+=nums[i];
}
int rsum=sum;
int lsum=0;
for(int i=0;i<nums.size();i++){
rsum-=nums[i];
if(rsum==lsum){
return i;
}
lsum+=nums[i];
}
return -1;
    }
};