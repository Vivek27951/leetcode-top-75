class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int numOfPositive = 0;
        int minElement = INT_MAX;
        int maxElement = 0;
        for (auto num : nums) {
            if (num > 0) {
                numOfPositive++;
                if (num < minElement) {
                    minElement = num;
                }
                if (num > maxElement) {
                    maxElement = num;
                }
            }
        }
        if (minElement > 1) {
            return 1;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= 0) {
                nums[i] = minElement;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (abs(nums[i]) - 1 < nums.size() && nums[abs(nums[i]) - 1] > 0) {
                nums[abs(nums[i]) - 1] *= -1;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                return i + 1;
            }
        }
        return maxElement + 1;
    }
};