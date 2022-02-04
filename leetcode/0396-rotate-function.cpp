class Solution {

public:
    int maxRotateFunction(vector<int>& a) {
        int n = a.size();
        if(n <= 1){
            return 0;
        }
        int sum = 0, first = 0, pos = n - 1, ans;
        for(int i = 0; i < n;++i){
            sum+=a[i];
            first+=i*a[i];
        }
        ans = first;
        for(int i = 1; i < n; ++i){
            first+=(sum - n*a[pos]);
            --pos;
            ans = max(first,ans);
        }
        return ans;
    }
};


