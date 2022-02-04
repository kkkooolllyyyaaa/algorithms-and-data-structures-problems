class Solution {
public:
    int minOperations(vector<int>& nums) {
        int div_count, x, ans = 0, max_div_count = 0;
        for(int i = 0;i<nums.size();++i){
            div_count = 0;
            x = nums[i];
            while(x>0){
                if(x%2==0){
                    x/=2;
                    div_count++;
                }
                else{
                    x--;
                    ans++;
                }
            }
            if(max_div_count < div_count)
                max_div_count = div_count;
        }
        return ans + max_div_count;
    }
};


