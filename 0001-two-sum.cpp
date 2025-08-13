class Solution {
public:
    // Solves Two Sum using a single pass hash map in O(n) time and O(n) space.
    // For each number, checks if the difference is already in the map.
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hmap;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (hmap.find(diff) != hmap.end() && hmap[diff] != i) {
                return {i, hmap[diff]};
            }
            hmap[nums[i]] = i;
        }
        return {};
    }
};
