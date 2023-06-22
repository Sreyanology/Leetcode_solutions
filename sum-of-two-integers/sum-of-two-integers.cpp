class Solution {
public:
    int getSum(int a, int b) {
        unsigned int carry = a&b;
        int result = a^b;
        while(carry!=0)
        {
            int shiftcarry = carry<<1;
            carry = result & shiftcarry;
            result^=shiftcarry;
        }
        return result;
    }
};