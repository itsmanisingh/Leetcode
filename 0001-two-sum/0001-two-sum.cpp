class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> firstIndex; // value -> index
        for (int i = 0; i < (int)nums.size(); ++i) {
            int need = target - nums[i];
            if (firstIndex.count(need)) {
                return { firstIndex[need], i };
            }
            firstIndex[nums[i]] = i;
        }
        return {}; // not found (per problem it always exists)
    }
};
