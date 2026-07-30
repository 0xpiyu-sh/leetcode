class Solution {
public:
    string removeStars(string s) {
        vector<char>a;
        string b="";
        for(char i:s){
            if(isalpha(i)){
                a.push_back(i);
            }
            else{
                a.pop_back();
            }
        }
        for(char i:a){
            b+=i;
        }
        return b;
    }
};