class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high=*max_element(piles.begin(),piles.end());
        int low=1;
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long hour=0;
            for(int i=0;i<piles.size();i++){
               hour += (piles[i] + mid - 1) / mid;
            }
            if(hour<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};