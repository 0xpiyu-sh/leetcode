class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int a=nums.size();
        k = k % a;
        vector<int>b;
        for(int i=nums.size()-k;i<nums.size();i++){
            b.push_back(nums[i]);
        }
        for(int i=0;i<nums.size()-k;i++){
            b.push_back(nums[i]);
        }
        nums.erase(nums.begin(),nums.end());
        nums=b;
    }
};