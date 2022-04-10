class Solution {
private:
    char toLower(char ch){
        if( (ch>= 'a' && ch <='z') || (ch>= '0' && ch <='9') )
            return ch;
        else{
            char temp= ch -'A' +'a';
            return temp;
        }
    }
    bool isValid(char ch){
        if( (ch>= 'a' && ch <='z') || (ch>= 'A' && ch <='Z') || (ch>= '0' && ch <='9') )
            return 1;
        return 0;
    }
    bool checkPalindrome(string s){
        int start= 0;
        int end= s.length()- 1;
        
        while(start <= end){
            if(s[start] != s[end])
                return 0;
           else{
               start++;
               end--;
           }
        }
        return 1;
    }
public:
    bool isPalindrome(string s) {
        string temp= "";
        
        for(int j=0; j< s.length(); j++){
            if(isValid(s[j]))
                temp.push_back(s[j]);
        }
        
        for(int j=0; j< temp.length(); j++){
            temp[j]= toLower(temp[j]);
        }
        return checkPalindrome(temp);
    }
};