class Solution {
public:
    int myAtoi(string s) {
        int idx = 0;
        int n = s.length();

        while (s[idx] == ' ') {
            idx++;
        }

        bool positive = true;
        if (idx < n && (s[idx] == '-' || s[idx] == '+')) {
            positive = (s[idx] != '-');
            idx++;
        }

        long i = 0;
        while (idx < n && isdigit((unsigned char)s[idx])) {
            int digit = s[idx] - '0';
            if (i > (INT_MAX -digit) / 10) {
                return positive ? INT_MAX : INT_MIN;
            }
            i = i * 10 + digit;
            idx++;
        }
        return positive ? (int) i : (int) -i;
    }
};
