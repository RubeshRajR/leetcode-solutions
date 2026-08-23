class Solution {
public:
    bool sumGame(string num) {
        int leftsum=0;
        int rightsum=0;
        int leftcnt=0;
        int rightcnt=0;
        int n=num.size();
        for(int i=0;i<n/2;i++){
            if(num[i]=='?'){
                leftcnt++;
            }
            else{
                leftsum+=num[i]-'0';
            }
        }
        for(int i=n/2;i<n;i++){
            if(num[i]=='?'){
                rightcnt++;
            }
            else{
                rightsum+=num[i]-'0';
            }
        }
        if((rightcnt+leftcnt)%2==1){
            return true;
        }
        if(leftsum-rightsum==9*(rightcnt-leftcnt)/2){
            return false;
        }
        return true;
    }
};