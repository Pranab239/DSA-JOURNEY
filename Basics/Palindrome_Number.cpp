class Solution {
public:
    int reverseNum(int x) {
        int reminder = 0;
        long revNum = 0;
        while(x != 0) {
            reminder = x % 10;
            x = x / 10;
            revNum = (revNum * 10) + reminder;
        }
        return (int)revNum;
    }

    bool isPalindrome(int x) {
        if (x < 0) return false;
        else {
            int revNum = reverseNum(x);
            if (revNum != x) return false;
            else return true;
        }
    }
};
