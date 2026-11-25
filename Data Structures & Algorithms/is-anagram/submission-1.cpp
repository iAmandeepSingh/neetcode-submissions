class Solution {
public:
    bool isAnagram(string s, string t) {
        if ( s.length() != t.length() ) {
            return false;
        }

        unordered_map<char, int> s_char_count;
        unordered_map<char, int> t_char_count;

        for (int i = 0; i< s.length() ; i++) {
            s_char_count[s[i]]++;
            t_char_count[t[i]]++;

        }

        return s_char_count == t_char_count;
    }
};
