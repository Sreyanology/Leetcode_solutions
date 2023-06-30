class Solution {
public:
    string reverseVowels(string s) {
        stack<char>vowels;
        int l = s.length();
        for(int i=0; i<l; i++)
        {
            switch(s[i])
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                 vowels.push(s[i]);
            }
        }
        for(int i=0; i<l; i++)
        {
            switch(s[i])
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                 //vowels.push(s[i]);
                 s[i] = vowels.top();
                 vowels.pop();
            }
        }

        return s;
    }
};