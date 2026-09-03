class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> hi;
        int starting = 0;
        int result = 0;
        for (int i = 0; i < s.size() && starting < s.size(); i++) {
            while (hi.find(s[i]) != hi.end()) {
                hi.erase(s[starting]); 
                starting++;
            }
            hi.insert(s[i]);
            result = max(result, i - starting + 1);
        }
        return result;
    }
};