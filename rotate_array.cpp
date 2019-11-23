class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size() == 0)
            return;
        int l = 0;
        int r = nums.size() - 1;
        while(k > nums.size()){
            k -= nums.size();
        }
        reverse(nums, l, r);
        reverse(nums, l, k-1);
        reverse(nums, k, r);
    }
private:
    vector<int> reverse(vector<int>& nums, int l, int r){
        while(l < r){     
            swap(nums[l], nums[r]);
            l ++;
            r --;
        }
        return nums;
    }
};


// 多次反转求解，特别注意 k > nums.size()的情况！