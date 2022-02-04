class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        vector<vector<int>>a(nums.size());
        for(int i=0;i<nums.size();++i){
            a[i].resize(2);
            a[i][0]=nums[i];
            a[i][1]=i;
        }
        sort(a.begin(),a.end());
        int ma=0,mi_ind=1e9;
        for(int i=0;i<nums.size();++i){
            if((a[i][1]-mi_ind)>ma)
                ma = a[i][1] - mi_ind;
            if(a[i][1]<mi_ind)
                mi_ind = a[i][1];
        }
        return ma;
    }
}; 
