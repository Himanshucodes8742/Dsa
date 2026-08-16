class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0)return false;

        long revNum = 0;
        int a = x;

        while(a!=0){
            
            int lastdigit = a%10;
            a = a/10;
            revNum = revNum*10 + lastdigit;
        }

        return revNum==x;

    }
};