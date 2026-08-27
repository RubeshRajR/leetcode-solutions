class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x=start^goal;
        int count=0;
        while(x!=0){
            count+=x&1; //last bit
            x>>=1;//remove last bits
        }
        return count;
    }
};