class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int currRes = 1,zero = 0,nonZero = 1;
        for(auto i:nums){
            
            if(i!=0)
            currRes *= i;
            else
                ++zero;
            
            nonZero *= i;
        }
        
        for(int i=0;i<nums.size();++i){
            
            if(zero>1){
                nums[i] = 0;
                continue;
            }
            
            if(nums[i] != 0)
            nums[i] = (int)(nonZero*(pow(nums[i],-1)));
            else
            nums[i] = currRes;
        }
        
        return nums;
    }
};


