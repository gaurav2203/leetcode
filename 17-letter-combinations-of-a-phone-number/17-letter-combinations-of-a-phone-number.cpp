class Solution {
public:
    vector<string> ans;
    
    void helper(string digits, string temp, int idx, string mapper[]){
        if( idx >= digits.length()) return ans.push_back(temp);
        
        int number= digits[idx] - '0';
        string value= mapper[number];
        
        for(int i=0; i< value.length(); i++){
            temp.push_back(value[i]);
            helper(digits, temp, idx+ 1, mapper);
            temp.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        string temp;
        string mapper[10]= {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        if( digits.length() == 0) return ans;
        helper(digits, temp, 0, mapper);
        return ans;
    }
};