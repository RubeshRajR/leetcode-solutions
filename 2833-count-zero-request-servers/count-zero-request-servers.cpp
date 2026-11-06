class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs,
                             int x, vector<int>& queries) {

        // 1. Sort logs by request time
        sort(logs.begin(), logs.end(),
             [](auto &a, auto &b) {
                 return a[1] < b[1];
             });

        // 2. Store query time and original index
        vector<pair<int,int>> q;

        for(int i = 0; i < queries.size(); i++) {
            q.push_back({queries[i], i});
        }

        // 3. Sort queries by time
        sort(q.begin(), q.end());

        // 4. Frequency of each server
        vector<int> freq(n + 1, 0);

        // 5. Answers in original query order
        vector<int> ans(queries.size());

        // 6. Two pointers
        int left = 0;
        int right = 0;

        // 7. Unique active servers
        int active = 0;

        // 8. Process sorted queries
        for(auto &it : q) {

            int t = it.first;
            int idx = it.second;

            int start = t - x;

            // 9. Add logs up to the right boundary
            while(right < logs.size() &&
                  logs[right][1] <= t) {

                int id = logs[right][0];

                if(freq[id] == 0)
                    active++;

                freq[id]++;
                right++;
            }

            // 10. Remove logs before the left boundary
            while(left < right &&
                  logs[left][1] < start) {

                int id = logs[left][0];

                freq[id]--;

                if(freq[id] == 0)
                    active--;

                left++;
            }

            // 11. Count inactive servers
            ans[idx] = n - active;
        }

        return ans;
    }
};