class Solution {
public:
    int minCost(string s, vector<int>& cost) {
        int ans = 0, n = s.length();
        for(int i=0;i<n;++i){
            int ma = cost[i], sum = ma;
            while((i+1) < n && s[i] == s[i+1]){
                sum+=cost[i+1];
                if(cost[i+1]>ma)
                    ma = cost[i+1];
                ++i;
            }
            ans+=(sum-ma);
        }
        return ans;
    }
};


