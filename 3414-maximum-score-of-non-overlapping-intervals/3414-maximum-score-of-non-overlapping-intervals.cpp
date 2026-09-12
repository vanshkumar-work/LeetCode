class Solution {
public:

    struct State {
        long long score = 0;
        array<int, 4> ids{};
        int cnt = 0;
    };

    // Returns true if a is better than b
    bool better(const State& a, const State& b) {

        if (a.score != b.score)
            return a.score > b.score;

        // Lexicographically smaller indices
        for (int i = 0; i < min(a.cnt, b.cnt); i++) {
            if (a.ids[i] != b.ids[i])
                return a.ids[i] < b.ids[i];
        }

        return a.cnt < b.cnt;
    }

    vector<int> maximumWeight(vector<vector<int>>& intervals) {

        int n = intervals.size();

        // start, end, weight, original index
        vector<array<long long, 4>> a(n);

        for (int i = 0; i < n; i++) {
            a[i] = {
                intervals[i][0],
                intervals[i][1],
                intervals[i][2],
                i
            };
        }

        // Sort by start
        sort(a.begin(), a.end(),
             [](const auto& x, const auto& y) {
                 if (x[0] != y[0])
                     return x[0] < y[0];

                 if (x[1] != y[1])
                     return x[1] < y[1];

                 return x[3] < y[3];
             });

        vector<long long> starts(n);

        for (int i = 0; i < n; i++)
            starts[i] = a[i][0];

        // next[i] = first interval whose start > a[i].end
        vector<int> nxt(n);

        for (int i = 0; i < n; i++) {

            nxt[i] = upper_bound(
                starts.begin(),
                starts.end(),
                a[i][1]
            ) - starts.begin();
        }

        // dp[i][k]:
        // best answer from i onward
        // with at most k intervals remaining
        vector<array<State, 5>> dp(n + 1);

        for (int i = n - 1; i >= 0; i--) {

            for (int k = 1; k <= 4; k++) {

                // ----------------
                // OPTION 1: SKIP
                // ----------------

                State skip = dp[i + 1][k];


                // ----------------
                // OPTION 2: TAKE
                // ----------------

                State take = dp[nxt[i]][k - 1];

                take.score += a[i][2];

                // Add current original index
                take.ids[take.cnt] = (int)a[i][3];
                take.cnt++;

                // We need indices sorted for lexicographical comparison
                sort(
                    take.ids.begin(),
                    take.ids.begin() + take.cnt
                );


                // Pick better one
                if (better(take, skip))
                    dp[i][k] = take;
                else
                    dp[i][k] = skip;
            }
        }

        vector<int> ans;

        for (int i = 0; i < dp[0][4].cnt; i++)
            ans.push_back(dp[0][4].ids[i]);

        return ans;
    }
};