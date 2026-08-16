class Solution {
    public boolean winnerSquareGame(int n) {
       boolean[] memo = new boolean[n+1];
       
       for (int k=1;k<=n;k++){
            for (int i=1;i*i<=k;i++){
                if (memo[k-i*i]==false){
                    memo[k]=true;
                    break;
                }
            }
       }
        return memo[n];
    }
}