class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        long long perms = 1;
        for(int i = 1; i <= perms; ++i){
            if((i+1)<=nums.size()){
                perms*=(i+1);
            }
            ans.push_back(nums);
            next_permutation(nums.begin(),nums.end());
        }
        return ans;
    }
};


