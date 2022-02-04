class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> my_map;
        for (int i = 0; i < nums.size(); i++) {
            int temp = target - nums[i];
            auto found = my_map.find(temp);
            if (found != my_map.end() && found->second != i) {
                return {found->second+1,i+1};
            }
            my_map.emplace(nums[i], i);
        }
        return {1,1};
    }
};


