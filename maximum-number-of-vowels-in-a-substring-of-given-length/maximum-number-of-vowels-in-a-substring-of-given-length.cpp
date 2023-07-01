class Solution {
public:
    bool isVowel(char &a)
    {
        switch(a){
                    case 'a':
                    case 'e':
                    case 'i':
                    case 'o':
                    case 'u':
                     return true;
                }
        return false;
    }
    int maxVowels(string s, int k) {
        int maxV = INT_MIN;
        int l = s.length();
        int vowelCount = 0;
        for(int i=0; i<l; i++)
        {
            if(i<k)
            {
                if(isVowel(s[i]))
                 vowelCount++;
                maxV = max(maxV, vowelCount);
            }
            else
            {
                if(isVowel(s[i]))
                 vowelCount++;
                if(isVowel(s[i-k]))
                 vowelCount--;
                maxV = max(maxV, vowelCount);
            }
        }
        return maxV;
    }
};