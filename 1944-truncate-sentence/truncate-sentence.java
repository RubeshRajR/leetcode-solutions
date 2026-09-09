class Solution {
    public String truncateSentence(String s, int k) {
        String word[]=s.split(" ");
        String ans="";
        for(int i=0;i<k;i++){
            ans+=word[i];
            if(i<k-1){
                ans+=" ";
            }
        } 
        return ans;
    }
}