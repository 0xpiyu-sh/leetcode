class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int a = 0;
        int b = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1)b++;
            else b = 0;
            a = max(a, b);
        }
        return a;
    }
};