class Solution {
public:
    int minBitFlips(int start, int goal) {
        return __builtin_popcount(start^goal);
    }
};
// This is a C++ built-in function that counts how many 1s are in a number's binary representation.