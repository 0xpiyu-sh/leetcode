class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size()==1)return true;
        int b=0;
        for(int i=0;i<word.size();i++){
            if(isupper(word[i]))b++;
        }
        if(b==0)return true;
        if(b==word.size())return true;
        if( b == 1 && isupper(word[0])) return true;
        return false;
    }
};