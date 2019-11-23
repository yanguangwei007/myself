class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(!nums.size())
            return 0;
        int i = 0;
        for(int j = 1; j < nums.size(); j ++){
            if(nums[i] == nums[j])
                continue;
            else
                nums[++i] = nums[j];
        }
        return i + 1;
    }
};


// 双指针滑动窗口，注意原地修改，不借助辅助空间。