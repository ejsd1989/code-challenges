125. Valid Palindrome

#include <ctype.h>

class Solution {
public:
    bool isPalindrome(string s) {
        const int MAX_SIZE = s.size();
        int FRONT = 0;
        int END = MAX_SIZE - 1;
        while(FRONT < END){
            if(!isalnum(s[FRONT]) || s[FRONT] == ' ')
            {
                FRONT++;
                continue;
            }
            if(!isalnum(s[END]) || s[END] == ' ')
            {
                END--;
                continue;
            }
            if(tolower(s[FRONT]) != tolower(s[END]))
                return false; 
            FRONT++;
            END--;
        }

        return true;
    }
};