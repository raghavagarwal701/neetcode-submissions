class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> s_char(26, 0), t_char(26, 0);
        if(s.size() != t.size())return false;
        for(int i = 0; i<s.size(); ++i){
            s_char[s[i]-'a']++;
            t_char[t[i]-'a']++;
        }
        if(s_char == t_char)return true;
        return false;
    }
};
