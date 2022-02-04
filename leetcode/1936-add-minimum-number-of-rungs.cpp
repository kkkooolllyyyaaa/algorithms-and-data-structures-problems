class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int cur = 0, ans = 0;
        for(int i = 0; i < rungs.size(); ++i){
            if(rungs[i]> dist + cur)
                ans+=(rungs[i] - cur - 1)/dist;
            cur = rungs[i];
        }
        return ans;
    }
};


