class Solution {
    int nextNum(int n)
    {
        int temp = 0;
        while(n)
        {
            temp = temp + (n%10)*(n%10);
            n/=10;
        }
        return temp;
    }
public:
    bool isHappy(int n) {
        unordered_set<int> map;
        while(n!=1 && !map.count(n))
        {
            map.insert(n);
            n = nextNum(n);
        }
        return n==1;
    }
};