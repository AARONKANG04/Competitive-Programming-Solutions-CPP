class Solution {
public:
    // Solution to "Longest Palindromic Substring" in O(n^2) time using center expansion
    string longestPalindrome(string s) {
        if (s.empty()) return "";

        int start = 0;
        int max_length = 0;

        for (int c = 0; c < s.length(); c++) {
            // Odd palindrome case
            int left = c;
            int right = c;
            while (left >= 0 && right < s.length() && s[left] == s[right]) {
                int current_len = right - left + 1;
                if (current_len > max_length) {
                    start = left;
                    max_length = current_len;
                }
                left--;
                right++;
            }
            // Even palindrome case
            left = c;
            right = c + 1;
            while (left >= 0 && right < s.length() && s[left] == s[right]) {
                int current_len = right - left + 1;
                if (current_len > max_length) {
                    start = left;
                    max_length = current_len;
                }
                left--;
                right++;
            }
        }

        return s.substr(start, max_length);
    }
};
