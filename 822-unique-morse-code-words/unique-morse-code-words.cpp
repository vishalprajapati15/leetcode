class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-",   "-...", "-.-.", "-..",  ".",    "..-.",
                                "--.",  "....", "..",   ".---", "-.-",  ".-..",
                                "--",   "-.",   "---",  ".--.", "--.-", ".-.",
                                "...",  "-",    "..-",  "...-", ".--",  "-..-",
                                "-.--", "--.."};

        unordered_set<string> st;

        for (string word : words) {
            string transformed = "";
            for (char c : word) {
                transformed += morse[c - 'a'];
            }
            st.insert(transformed);
        }

        return st.size();
    }
};