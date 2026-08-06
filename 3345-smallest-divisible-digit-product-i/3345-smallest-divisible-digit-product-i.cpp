class Solution {
public:
    int smallestNumber(int n, int t) {
        int no=n;
        while(true){
            int p=1;
            n=no;
            while(n>0){
                p*=(n%10);
                n/=10;
            }
            if(p%t==0)break;
            else no++;
        }
        return no;
    }
};