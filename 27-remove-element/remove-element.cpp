class Solution {
public:
    int removeElement(vector<int>& s, int val) {
        s.erase(remove(s.begin(), s.end(), val), s.end());
        return s.size();
    }
};