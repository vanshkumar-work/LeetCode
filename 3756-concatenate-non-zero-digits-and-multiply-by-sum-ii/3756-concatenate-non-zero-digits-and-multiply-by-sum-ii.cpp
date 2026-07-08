class Solution {
public:
    static const int MOD = 1e9 + 7;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n = s.size();

        vector<int> digits;
        vector<int> pos;

        for (int i = 0; i < n; i++) {
            if (s[i] != '0') {
                digits.push_back(s[i] - '0');
                pos.push_back(i);
            }
        }

        int m = digits.size();

        vector<long long> prefSum(m + 1, 0);
        vector<long long> prefNum(m + 1, 0);
        vector<long long> pw(m + 1, 1);

        for (int i = 1; i <= m; i++)
            pw[i] = pw[i - 1] * 10 % MOD;

        for (int i = 0; i < m; i++) {
            prefSum[i + 1] = prefSum[i] + digits[i];
            prefNum[i + 1] = (prefNum[i] * 10 + digits[i]) % MOD;
        }

        vector<int> first(n, -1), last(n, -1);

        int p = 0;
        for (int i = 0; i < n; i++) {
            while (p < m && pos[p] < i) p++;
            if (p < m) first[i] = p;
        }

        p = m - 1;
        for (int i = n - 1; i >= 0; i--) {
            while (p >= 0 && pos[p] > i) p--;
            if (p >= 0) last[i] = p;
        }

        vector<int> ans;

        for (auto &q : queries) {
            int l = q[0], r = q[1];

            int L = first[l];
            int R = last[r];

            if (L == -1 || R == -1 || L > R) {
                ans.push_back(0);
                continue;
            }

            long long sum = prefSum[R + 1] - prefSum[L];

            long long x =
                (prefNum[R + 1] -
                 prefNum[L] * pw[R - L + 1] % MOD + MOD) % MOD;

            ans.push_back(sum % MOD * x % MOD);
        }

        return ans;
    }
};