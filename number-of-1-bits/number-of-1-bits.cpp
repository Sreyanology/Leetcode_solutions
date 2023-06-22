class Solution {
public:
    int hammingWeight(uint32_t n) {
        int tot = 0;
        while(n)
        {
            if(n&1) tot++;
            n = n>>1;
        }
        return tot;
    }
};