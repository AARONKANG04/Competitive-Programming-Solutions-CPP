class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> sumVec;
        int mag = n / 2;
        for (int i = -mag; i <= mag; i++) {
            if (i == 0 && n % 2 == 0) {
                continue;
            } else {
                sumVec.push_back(i);
            }
        }
        return sumVec;
    }
};
