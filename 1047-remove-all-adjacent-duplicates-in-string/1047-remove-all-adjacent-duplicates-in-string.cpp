class Solution {
public:
    string removeDuplicates(string s) {
	
        for(int i=1;i<s.length();i++){
            if(i>0 && s[i]==s[i-1]){
                s.erase(i-1,2);
                i=i-2;
            }
        }
		
        return s;
    }
};