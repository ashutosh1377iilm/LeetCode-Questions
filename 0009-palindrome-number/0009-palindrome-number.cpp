class Solution {
public:
    bool isPalindrome(int x) {
        int Palindrome = 0;
        int originalValue = x;
        if (originalValue < 0)
            return false;
        while(x!=0){
            int lastDigit = x%10;
            x/=10;
            if (Palindrome > INT_MAX / 10 ||
            (Palindrome == INT_MAX / 10 && lastDigit > 7))
                return false;
            Palindrome = Palindrome*10+ lastDigit;
        }
        if(Palindrome == originalValue) return true;
        else return false;
    }
};