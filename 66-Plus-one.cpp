class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        int count = 1;
        if(digits[len-1] + count < 10){
            digits[len-1] ++;
            return digits;
        }
        reverse(digits, len);
        for(int i = 0; i < len; i ++){
            if(count == 1 && digits[i] + count >= 10){
                digits[i] = (digits[i] + count) % 10;
                count = 1;
                if(i == len - 1)
                    digits.push_back(1);
            }
            else{
                digits[i] = digits[i] + count;
                count = 0;
            }
        }
        reverse(digits, digits.size());
        return digits;
    }

private:
    void reverse(vector<int>& digits, int len){
        int l = 0, r = len - 1;
        while(l < r){
            swap(digits[l], digits[r]);
            l ++;
            r --;
        }
    }
};

// ¸Ð¾õÐ´¸´ÔÓÁË