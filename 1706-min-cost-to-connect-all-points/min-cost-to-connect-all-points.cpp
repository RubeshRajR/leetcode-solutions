class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int v = points.size();

        vector<bool> visited(v, false);

        int edge = 0;
        int cost = 0;

        visited[0] = true;

        while (edge < v - 1) {
            int minCost = INT_MAX;
            int end = -1;

            for (int i = 0; i < v; i++) {
                if (visited[i]) {
                    for (int j = 0; j < v; j++) {
                        if (!visited[j]) {
                            int distance =
                                abs(points[i][0] - points[j][0]) +
                                abs(points[i][1] - points[j][1]);

                            if (distance < minCost) {
                                minCost = distance;
                                end = j;
                            }
                        }
                    }
                }
            }

            visited[end] = true;
            cost += minCost;
            edge++;
        }

        return cost;
    }
};