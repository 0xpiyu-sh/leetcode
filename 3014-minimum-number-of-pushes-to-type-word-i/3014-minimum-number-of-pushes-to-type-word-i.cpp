class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int a = 0;
        for (int i = 0; i < n; i++) {
            a += i / 8 + 1;
        }
        return a;
    }
};