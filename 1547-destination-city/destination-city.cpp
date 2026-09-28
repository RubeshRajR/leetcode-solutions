class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string>from;
        for(auto path:paths){
            from.insert(path[0]);
        }
        for(auto path:paths){
            if(!from.count(path[1])){
                return path[1];
            }
        }
        return "";
    }
};