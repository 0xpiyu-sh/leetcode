class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        vector<char> a;
        for(char i : s) a.push_back(i);
        vector<char> b;
        for(char i : goal) b.push_back(i);
        if(a == b) return true;
        for(int i = 0; i < s.size(); i++) {
            char z = a[0];
            a.erase(a.begin());   
            a.push_back(z);     
            if(a == b) return true;
        }

        return false;
    }
};