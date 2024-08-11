class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int lastWordSize = 0;
        bool wordInit = false;

        for(int i = s.length() - 1; i >= 0; i--){
            if(!wordInit && s[i] == ' '){
                continue;
            }else if(!wordInit && s[i] != ' '){
                wordInit = true;
            }

            if(s[i] == ' '){
                break;
            }else{
                lastWordSize++;
            }
        }

        return lastWordSize;

    }
};