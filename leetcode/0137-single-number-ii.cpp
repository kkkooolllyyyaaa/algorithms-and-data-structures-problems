class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> bits(32,0);
        vector<uint> vals(32);
        uint cur = 1;
        for(int i = 0; i < 32; ++i){
            vals[i] = cur;
            cur*=2;
        }
        for(int i = 0; i < nums.size(); ++i){
            uint current = nums[i];
            for(int j = 0; j < 32; ++j){
                if(vals[j] & current)
                    bits[j]++;
            }
        }
        int ans = 0;
        for(int i = 0;i<31;++i){
            if(bits[i]%3!=0){
                ans = ans + vals[i];
            }
        }
        if(bits[31]%3!=0){
            ans = ans - vals[31];
        }
        return ans;
    }
};


