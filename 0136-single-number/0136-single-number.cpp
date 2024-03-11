class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int s_num = 0;
        for (int n : nums)
            s_num ^= n;
        return s_num;}
};