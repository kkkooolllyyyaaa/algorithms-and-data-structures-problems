class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int cnt = 0;
        vector<bool>visited(rooms.size(),false);
        vector<int>new_keys;
        new_keys.push_back(0);
        while(new_keys.size()>0){
            int cur = new_keys[new_keys.size()-1];
            if(!visited[cur]){
                visited[cur] = true;
                ++cnt;
                new_keys.pop_back();
            }
            else{
                new_keys.pop_back();
                continue;
            }         
            for(int i=0;i<rooms[cur].size();++i){
                if(!visited[rooms[cur][i]])
                    new_keys.push_back(rooms[cur][i]);
            }
        }
        if(cnt == rooms.size())
            return true;
        else
            return false;
    }
};


