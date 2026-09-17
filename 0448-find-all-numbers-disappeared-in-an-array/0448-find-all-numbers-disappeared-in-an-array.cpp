class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> wayne;
        sort(nums.begin(), nums.end());
        int temp = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == temp) {
                temp++;
            }
            else if (nums[i] < temp) {
            }
            else {
                while (nums[i] > temp) {
                    wayne.push_back(temp);
                    temp++;
                }
                temp++;
            }
        }
        while (temp <= nums.size()) {
            wayne.push_back(temp);
            temp++;
        }
        return wayne;
    }
};