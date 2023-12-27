class Solution {
public:
    int reverse(int x) {
        long revNum = 0;
        int reminder;
        while (x != 0) {
            reminder = x % 10;
            x = x / 10;
            revNum = (revNum * 10) + reminder;
        }
        if (revNum > INT_MAX || revNum < INT_MIN)  return 0;
        else return (int)revNum;
    }
};
