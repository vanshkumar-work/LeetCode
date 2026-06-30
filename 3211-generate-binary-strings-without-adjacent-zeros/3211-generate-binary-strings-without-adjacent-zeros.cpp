class Solution {
public:

    vector<string> validStrings(int n) {
        vector<string> result;
        if (n == 0) return result;
        if (n == 1) {
            result.push_back("0");
            result.push_back("1");
            return result;
        }
        vector<string> prev = validStrings(n - 1);
        for (const string& s : prev) {
            if (s.back() == '0') {
                result.push_back(s + "1");
            }
            else {
                result.push_back(s + "0");
                result.push_back(s + "1");
            }
        }
        return result;
    }
};