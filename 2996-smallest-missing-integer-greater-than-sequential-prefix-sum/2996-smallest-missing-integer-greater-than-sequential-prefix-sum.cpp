class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int a=0;
        int i=1;
        while(i!=nums.size()+1){
            a+=nums[i-1];
            if(i==nums.size())break;
            if(nums[i-1]+1!=nums[i])break;
            i++;
        }
        while(i!=0){
            if(count(nums.begin(),nums.end(),a)>0)a++;
            else i=0;
        }
        return a;
    }
};