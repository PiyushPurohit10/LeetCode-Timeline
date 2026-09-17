class Solution {
public:
    void sortColors(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            for (int j = 0; j + 1 < nums.size(); j++) {
                if (nums[j] > nums[j + 1]) {
                    swap (nums[j], nums[j + 1]);
                }
            }
        }
    }
};