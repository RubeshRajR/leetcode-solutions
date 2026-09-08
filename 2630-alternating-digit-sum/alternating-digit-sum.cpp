class Solution {
public:
    int alternateDigitSum(int n) {
        int temp=n;
        string s=to_string(temp);
        int size=s.size();
        size--;
        int sum=0;
        while(n>0){
            int digit=n%10;
            if(size%2==0){
                sum+=digit;
            }
            else{
                sum+=(digit*-1);
            }
            n/=10;
            size--;
        }
        return sum;
    }
};