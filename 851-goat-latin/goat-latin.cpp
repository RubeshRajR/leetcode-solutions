
class Solution {
public:
    string toGoatLatin(string sentence) {

        stringstream ss(sentence);
        string token;

        int index = 1;
        string ans = "";

        while(ss >> token) {

            string word = token;
            string aa = "";

            char first = tolower(word[0]);

            if(first == 'a' || first == 'e' ||
               first == 'i' || first == 'o' ||
               first == 'u') {

                aa = word + "ma";
            }
            else {

                aa = word.substr(1) + word[0] + "ma";
            }

            aa += string(index, 'a');

            index++;

            if(!ans.empty()) {
                ans += " ";
            }

            ans += aa;
        }

        return ans;
    }
};
