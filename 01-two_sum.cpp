class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> record;
        for(int i = 0; i < nums.size(); i ++){
            int other = target - nums[i];
            if(record.find(other)!= record.end()){
                res.push_back(record[other]);
                res.push_back(i);
                break;
            }
            record[nums[i]] = i;
        }
        return res;
    }
};

// 注意是否需要考虑nums中只有0或1个数的情况，还有找不到两数之和为target的情况，本题默认没有这些特殊情况！