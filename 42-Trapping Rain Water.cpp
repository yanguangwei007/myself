class Solution {
public:
    int trap(vector<int>& height) {
        int len = height.size();
        if(len <= 2)
            return 0;
        int left = 0, right = len - 1;
        int leftmax = height[0], rightmax = height[right];
        int res = 0;
        while(left < right){
            if(left < len && height[left] < height[right]){
                if(height[left] >= leftmax)
                    leftmax = height[left];
                else
                    res += leftmax - height[left];
                left ++;
            }
            else{
                if(height[right] >= rightmax)
                    rightmax = height[right];
                else
                    res += rightmax - height[right];
                right --;
            }
        }
        return res;
    }
};

// 双指针应用，盛最多水的容器高级版：对撞指针 + 滑动窗口