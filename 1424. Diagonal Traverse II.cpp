class Solution{
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<vector<int>> ans;
        for (int r = 0; r < nums.size(); ++r) {
            for (int c = 0; c < nums[r].size(); ++c) {
                if (ans.size() <= r + c) {
                    ans.emplace_back();
                }
                ans[r + c].emplace_back(nums[r][c]);
            }
        }
        vector<int> result;
        for (const auto& row: ans) {
            for (int i = row.size() - 1; i >= 0; --i) {
                result.emplace_back(row[i]);
            }
        }
        return result;
    }
};
