class Solution {
public:
    bool isPalindrome(string s) {
        string new_string = "";
        
        for(int i=0; i<s.size(); i++){
            if(s[i]>=65&&s[i]<=90){
                new_string.push_back(s[i] + 32);
            }
            else if(s[i]>=97&&s[i]<=122){
                new_string.push_back(s[i]);
            }
            else if(s[i] >= 48 && s[i] <= 57){
                new_string.push_back(s[i]);
            }
        }
        
        int n = new_string.size();
        int front = 0;
        while(front<n/2){
            
            if(new_string[front]!=new_string[n-front-1]){
                return false;
            }
            front++;
        }
        return true;
        
    }
};