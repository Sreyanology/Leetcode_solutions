class Solution {
public:
    string convert(string s, int numRows) {
        vector<vector<char>>ans(numRows);
        bool incdec = true;
        int row = 0;
        for(int i=0; i<s.length(); i++)
        {
            char c = s[i];
            if(row<numRows-1 && incdec)
            {
                ans[row].push_back(c);
                row++;
                continue;
            }
            else if(row == numRows-1 && incdec)
            {
                ans[row].push_back(c);
                incdec = false;
                if(row>0)
                row--;
                continue;
            }

            if(!incdec && row>0)
            {
                ans[row].push_back(c);
                row--;
                continue;
            }
            else if(!incdec && row == 0)
            {
                ans[row].push_back(c);
                if(row<numRows-1)
                row++;
                incdec = true;
                continue;
            }
        }
        string anstr;
        for(int i=0; i<numRows; i++)
        {
            for(int j=0; j<ans[i].size(); j++)
             anstr += ans[i][j];
        }

        return anstr;
    }
};