class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }

        // If both strings are same
        if (s == goal) {
            vector<int> freq(26, 0);

            for (char c : s) {
                freq[c - 'a']++;

                // Duplicate character exists
                if (freq[c - 'a'] > 1) {
                    return true;
                }
            }

            return false;
        }

        // Store indices where characters differ
        int first = -1, second = -1;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != goal[i]) {
                if (first == -1) {
                    first = i;
                } else if (second == -1) {
                    second = i;
                } else {
                    return false;
                }
            }
        }

        // Check if swapping makes strings equal
        return second != -1 && s[first] == goal[second] &&
               s[second] == goal[first];
    }
};