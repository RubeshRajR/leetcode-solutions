class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,unordered_set<int>>mp;
        for(auto seat:reservedSeats){
            mp[seat[0]].insert(seat[1]);
        }
        int ans=2*n;
        for(auto row:mp){
            bool left=true;
            bool right=true;
            bool middle=true;
            auto seats=row.second;
            for(int i=2;i<=5;i++){
                if(seats.count(i)){
                    left=false;
                    break;
                }
            }
            for(int i=4;i<=7;i++){
                if(seats.count(i)){
                    middle=false;
                    break;
                }
            }
            for(int i=6;i<=9;i++){
                if(seats.count(i)){
                    right=false;
                    break;
                }
            }
            if(left&&right){
                ans+=0;
            }
             else if (left || middle || right) {
                ans -= 1;
            }
            else {
                ans -= 2;
            }
        }
        return ans;
    }
};