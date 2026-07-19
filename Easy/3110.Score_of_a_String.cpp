class Solution {
public:
    int scoreOfString(string s) {
        int result = 0;
        for(int i = 0; i != s.size() - 1; i++){
            if((s[i] - s[i + 1]) > 0)
            result += s[i] - s[i + 1];
            else
            result += -(s[i] - s[i + 1]);
        }
        return result;
    }
};