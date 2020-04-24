class Solution {
public:
    char firstUniqChar(string s) {
        vector<int> memo(26);
        for(char &ch: s)
        {
            memo[ch - 'a']++;
        }
        for(char &ch: s)
        {
            if(memo[ch - 'a'] == 1)
                return ch;
        }
        return ' ';
    }
};
