class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x=start^goal;
        string ans=bitset<32>(x).to_string();
        int count=0;
        for(char ch:ans){
            if(ch=='1'){
                count++;
            }
        }
        return count;
    }
};