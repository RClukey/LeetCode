class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int M = 0;
        for (int x : score) M = max(M, x);

        vector<int> score_idx(M + 1, 0);
        for (int i = 0; i < score.size(); i++) score_idx[score[i]] = i + 1;

        vector<string> rank(score.size(), "");
        int place = 1;
        for (int i = M; i >= 0; i--) {
            if (score_idx[i] != 0) {
                int org_idx = score_idx[i] - 1;
                if (place == 1) rank[org_idx] = "Gold Medal";
                else if (place == 2) rank[org_idx] = "Silver Medal";
                else if (place == 3) rank[org_idx] = "Bronze Medal";
                else rank[org_idx] = to_string(place);
                place++;
            }
        }
        return rank;
    }
};
