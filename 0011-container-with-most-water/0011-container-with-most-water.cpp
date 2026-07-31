class Solution {
public:
    int maxArea(vector<int>& height) {
        int x=0;
        int j=height.size()-1;
        int i=0;
        while(i<j){
            int a=min(height[i],height[j]);
            int b=j-i;
            x=max(x,(b*a));
            if(height[i]<height[j])i++;
            else j--;
        }
        return x;
    }
};