class Solution {
public:
    int getLeastFrequentDigit(int n) {
        int freq[10]={};
        while(n>0){
            freq[n%10]++;
            n/=10;
        }
        int ans=0;
        for(int i=1;i<=9;i++){
            if(freq[i]!=0&&(freq[ans]==0||freq[i]<freq[ans])){
                ans=i;
            }
        }
        return ans;
    }
};