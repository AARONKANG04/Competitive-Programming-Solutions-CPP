class Solution {
public:
    // Solution to "Length of Longest Substring" with a hashed set
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int left = 0;
        int max_len = 0;
        for (int right = 0; right < s.length(); right++) {
            while (seen.count(s[right])) {
                seen.erase(s[left++]);
            }
            seen.insert(s[right]);
            max_len = max(max_len, right - left + 1);
        }
        return max_len;
    }
};

// class Solution {
// public:
//     // Solution to "Length of Longest Substring" with a vector
//     int lengthOfLongestSubstring(string s) {
//         vector<int> last(256, -1);
//         int max_len = 0, left = 0;              
//         for (int right = 0; right < s.length(); right++) {
//             unsigned char c = s[right];         
//             if (last[c] >= left) left = last[c] + 1; 
//             last[c] = right;
//             max_len = max(max_len, right - left + 1);
//         }
//         return max_len;
//     }
// };

