class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int i = 0;
        int arr_length = size(nums);
        bool result = false;
        while(i < arr_length) {
            for (int j = i+1;j < arr_length; j++ ) {
                if (nums[i] == nums[j]) {
                    result = true;
                    break;
                }
            }
            i++;
        }
        return result;
    }
};