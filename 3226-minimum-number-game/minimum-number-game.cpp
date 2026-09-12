class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i:nums){
            pq.push(i);
        }
        vector<int>ans;
        while(pq.size()>0){
            int f=pq.top();
            pq.pop();
            int s=pq.top();
            pq.pop();
            ans.push_back(s);
            ans.push_back(f);
        }
        return ans;
    }
};