class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int lastCharIndex = strs[0].length(); // Keeps track of the last Char of the prefix

        for(int i = 1; i < strs.size(); i++){

            for(int j = 0; j < lastCharIndex; j++){

                if(strs[i][j] != strs[0][j]){
                    lastCharIndex = j; // This sets the smallest prefix last char position so far
                }

            }

        }
        
        string prefix = ""; // Create a new String to be returned as prefix

        for(int i = 0; i < lastCharIndex; i++){
            prefix += strs[0][i];
        }

        return prefix;

    }
};