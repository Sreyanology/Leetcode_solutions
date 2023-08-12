class Solution {
public:
    string decodeCiphertext(string eT, int rows) {
        if(eT.length() == 0)
         return "";
        int n=eT.size();
        int col=n/rows;
        string s="";
        for(int i=0;i<col;i++){
            int j=i;
            while(j<n){
                s+=eT[j];
                j=j+col+1;
            }
        }
        while(isspace(s.back())){
            s.pop_back();
        }
        return s;
    }
};