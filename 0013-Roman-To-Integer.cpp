class Solution {
public:
    unordered_map<char, int> char_to_int = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int romanToInt(string s) {
        int total = 0;
        int prev = -1;
        for (int i = s.size() - 1; i >= 0; i--) {
            char c = s[i];
            int current = char_to_int[c];
            if (current >= prev) {
                total += current;
            } else {
                total -= current;
            }
            prev = current;
        }   
        return total; 
    }
};
