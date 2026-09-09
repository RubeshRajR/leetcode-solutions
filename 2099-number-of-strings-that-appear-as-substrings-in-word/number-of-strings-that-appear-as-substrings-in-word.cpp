class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for(auto p:patterns){
            if(word.find(p)!=string::npos){
                count++;
            }
        }
        return count;
    }
};


// word.find(pattern)

// If the pattern exists, find() returns its starting index.

// If it doesn't exist, it returns:

// string::npos