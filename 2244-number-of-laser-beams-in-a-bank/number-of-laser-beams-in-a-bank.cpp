class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int lasers = 0;
        //queue<int>q;
        int n = bank.size();
        int sec = 0;

        // number of security cams in 0th row
        for(int i=0; i<bank[0].length(); i++)
        {
            if(bank[0][i] == '1')
             sec++;
        }

        // now finding lasers in eACH ROW
        for(int i=1; i<n; i++)
        {
            int temp = 0;
            for(int j=0; j<bank[i].length(); j++)
            {
                if(bank[i][j] == '1')
                {
                    temp++;
                    lasers+=sec;
                }
            }
            if(temp)
             sec=temp;
        }

        return lasers;

    }
};