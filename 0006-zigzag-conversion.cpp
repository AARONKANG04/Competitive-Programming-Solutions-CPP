class Solution {
public:
    // First Rough Implementation -> beats 65%
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        int cycle = 2 * (numRows - 1);
        vector<string> strings(numRows);
        for (int i = 0; i < s.length(); i += cycle) {
            strings[0] += s[i];
        } 
        for (int r = 1; r < numRows - 1; r++) {
            for (int i = 0; i < s.length(); i += cycle) {
                if (r + i < s.length()) {
                    strings[r] += s[r + i];
                }
                if (i + cycle - r < s.length()) {
                    strings[r] += s[i + cycle - r];
                }
            }
        }
        if (numRows > 1) {
            for (int i = 0; i < s.length(); i += cycle) {
                if (i + cycle/2 < s.length()) {
                    strings[numRows-1] += s[i + cycle/2];
                }
            } 
        }
        string new_str = "";
        for (int r = 0; r < numRows; r++) {
            new_str += strings[r];
        }
        return new_str;
    }
};


