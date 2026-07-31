class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        sort(word.begin(),word.end());
        int a = 0;
        int b=1;
        vector<int> f;
        set<char> c;
        for(char i:word){
            int d=c.size();
            c.insert(i);
            if(d==c.size()){
                b++;
            }
            else{
                if(d != 0)f.push_back(b);
                b=1;
            }
        }
    if(n > 0)f.push_back(b);

    sort(f.rbegin(), f.rend());

    for(int j = 0; j < f.size(); j++){
        a += (j / 8 + 1) * f[j];
    }
        return a;
    }
};