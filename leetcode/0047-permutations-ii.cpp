class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        int used[21]={0};
        int perms = 1, del = 1;
        bool flag = true;
        for(int i = 1; i <= perms; ++i){
            if(nums.size()>=(i+1)){
                perms*=(i+1);
            }
            else if(flag){
                perms/=del;
                flag = false;
                cout<<perms<<' '<<del<<endl;
            }
            if((i-1)<nums.size()){
                used[10+nums[i-1]]++;
                del *= used[10+nums[i-1]];
            }
            ans.push_back(nums);
            next_permutation(nums.begin(),nums.end());
        }
        return ans;
    }
};


