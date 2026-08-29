class Solution {
public:
    int reverse(int x) {
        int last_digit;
        long long rev_number = 0;
        
        while(x!=0){
            last_digit = x%10;
            x=x/10;
            rev_number = rev_number*10 + last_digit;
        }
        
        
        if (rev_number>(pow(2,31)-1) || rev_number<pow(-2 ,31))return 0;
        return rev_number;
    }
};