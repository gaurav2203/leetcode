class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1= m-1;
        int p2= n-1;
        int rep_ptr= m+n- 1;
        
        while(p2>=0 && p1 >=0 && p1<=rep_ptr){
            if(nums1[p1] < nums2[p2]){
                nums1[rep_ptr]= nums2[p2];
                p2--;
                rep_ptr--;
            }
            else{
                swap(nums1[p1], nums1[rep_ptr]);
                p1--;
                rep_ptr--;
            }
        }
        while(p2 >=0){
            nums1[rep_ptr]= nums2[p2];
            rep_ptr--;
            p2--;
        }
    }
};