class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int a=0;
        for(int i:nums){
            if(i<10)continue;
            else if(i<100)a++;
            else if(i<1000)continue;
            else if(i<10000)a++;
            else if(i<100000)continue;
            else if(i<1000000)a++;
        }
        return a;
    }
};