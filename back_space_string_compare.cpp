class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = s.size() - 1;      
        int j = t.size() - 1;      
        int backspaceCountS = 0;   
        int backspaceCountT = 0;   

        while (i >= 0 || j >= 0) {
           
            while (i >= 0 && (s[i] == '#' || backspaceCountS > 0)) {
                if (s[i] == '#') {
                    backspaceCountS++; 
                    i--;              
                } else if (backspaceCountS > 0) {
                    backspaceCountS--; 
                    i--;            
                }
            }

            while (j >= 0 && (t[j] == '#' || backspaceCountT > 0)) {
                if (t[j] == '#') {
                    backspaceCountT++; 
                    j--;              
                } else if (backspaceCountT > 0) {
                    backspaceCountT--; 
                    j--;            
                }
            }
            if (i >= 0 && j >= 0 && s[i] != t[j]) {
                return false; 
            }

            if ((i >= 0 && j < 0) || (j >= 0 && i < 0)) {
                return false; 
            }

            i--; 
            j--;
        }

        return true; 
    }
};
