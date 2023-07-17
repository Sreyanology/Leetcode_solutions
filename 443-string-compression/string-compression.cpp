class Solution {
public:
    int compress(vector<char>& chars) {
        int charptr = 1;
        int l = chars.size();
        int count = 1;
        for(int i=1; i<l; i++)
        {
            if(chars[i] == chars[i-1])
            {
                count++;
                continue;
            }
            else if(count>1)
            {
                string s = to_string(count);
                for(int j=0; j<s.length(); j++)
                 chars[charptr++] = s[j];

                count = 1;
            }
            if(charptr<l)
              chars[charptr++]=chars[i];
        }
        if(count>1)
        {
            string s = to_string(count);
                for(int j=0; j<s.length(); j++)
                 chars[charptr++] = s[j];
        }
        chars.resize(charptr);
        return charptr;
    }
};