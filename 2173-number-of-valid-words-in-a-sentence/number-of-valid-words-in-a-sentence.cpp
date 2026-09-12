class Solution {
public:
    int countValidWords(string sentence) {
        
        string token;
        stringstream ss(sentence);
        
        int count = 0;

        while (ss >> token) {
            
            int hcount = 0;
            int hpos = -1;
            
            int pcount = 0;
            int ppos = -1;
            
            int flag = 0;

            // Check every character
            for (int i = 0; i < token.size(); i++) {
                
                if (token[i] == '-') {
                    hcount++;
                    hpos = i;
                }
                
                if (token[i] == '!' || 
                    token[i] == '.' || 
                    token[i] == ',') {
                    
                    pcount++;
                    ppos = i;
                }
                
                // Digit found
                if (isdigit(token[i])) {
                    flag = 1;
                    break;
                }
            }

            // If digit exists, token is invalid
            if (flag == 1)
                continue;

            // More than one hyphen
            if (hcount > 1)
                continue;

            // Hyphen must be surrounded by lowercase letters
            if (hcount == 1) {
                if (hpos == 0 || hpos == token.size() - 1)
                    continue;
                if (!islower(token[hpos - 1]) ||
                    !islower(token[hpos + 1]))
                    continue;
            }
            // More than one punctuation
            if (pcount > 1)
                continue;
            // Punctuation must be at the end
            if (pcount == 1 && ppos != token.size() - 1)
                continue;
            // If we reached here, token is valid
            count++;
        }
        return count;
    }
};


// Example 1: "a-b" ✅
// a - b
// ↑   ↑
// |   |
// lowercase

// Both are lowercase.

// !islower('a')  → false
// !islower('b')  → false

// So:

// false || false
// = false

// The if doesn't execute → valid.