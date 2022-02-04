class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if(nums.size()==2)
            return nums;
        map<int,int>a;
        for(int i=0;i<nums.size();++i){
            a[nums[i]]++;
            if(a[nums[i]]==2)
                a.erase(a.find(nums[i]));
        }
        vector<int>ans;
        for(auto i : a){
            ans.push_back(i.first);
        }
        return ans;
    }
};


