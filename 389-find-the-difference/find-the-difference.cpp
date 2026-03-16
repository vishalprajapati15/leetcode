class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end()); // Fixed: t.end() instead of t.begin()
        
        // Loop through the shorter string
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != t[i]) {
                return t[i]; // Found the difference early
            }
        }
        
        return t.back();
    }
};