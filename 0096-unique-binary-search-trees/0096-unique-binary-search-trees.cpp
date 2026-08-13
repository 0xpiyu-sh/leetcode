class Solution {
public:
    int numTrees(int n) {

        long long a = 1;

        for (int i = 1; i <= n; i++) {
            a = a * (n + i) / i;
        }

        return a / (n + 1);
    }
};