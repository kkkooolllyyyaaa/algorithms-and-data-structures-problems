class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=-1,e=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target && s==-1 && e==-1){
                s=i;
                e=i;
            }
            else if(nums[i]==target){
                e=i;
            }
        }
        vector<int>ans;
        ans.push_back(s);
        ans.push_back(e);
        return ans;
    }
};


