class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for (int left = 1; left < n; left++) {
            int right = n - left;
            if (!hasZero(left) && !hasZero(right)) {
                return {left, right};
            }
        }
        return {};
    }

private:
    bool hasZero(int n) {
        while (n > 0) {
            if (n % 10 == 0) return true;
            n /= 10;
        }
        return false;
    }
};
