class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(!nums.size())
            return 0;
        int i = 0;
        int j = 1;
        while(i < nums.size() - 1 && j < nums.size()){
            if(nums[i] == nums[j])
                j ++;
            else
                nums[++i] = nums[j++];
        }
        return i + 1;
    }
};