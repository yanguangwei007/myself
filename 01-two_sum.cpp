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

// ע���Ƿ���Ҫ����nums��ֻ��0��1����������������Ҳ�������֮��Ϊtarget�����������Ĭ��û����Щ���������