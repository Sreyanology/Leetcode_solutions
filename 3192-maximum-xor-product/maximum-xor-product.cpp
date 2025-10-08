class Solution {
public:
    int maximumXorProduct(long long a, long long b, int n) {
        int MOD = 1e9 + 7;
        for(int i=n-1; i>=0; i--)
        {
            long long mask = (long long)1<<i;
            if((a & mask) && (b & mask))
             continue;
            else if(a & mask)
            {
                if(a>b)
                {
                    a^=mask;
                    b|=mask;
                }
            }
            else if(b & mask)
            {
                if(b>a)
                {
                    b^=mask;
                    a|=mask;
                }
            }
            else
            {
                a|=mask;
                b|=mask;
            }
        }

        a %= MOD;
        b %= MOD;
        return (1LL*a*b)%MOD;
    }
};