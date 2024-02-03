class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        vector<int> dp(arr.size(), -1);  
        return solve(arr, k, dp, 0);     
    }

    int solve(vector<int>& arr, int k, vector<int>& dp, int index) {
        if (index >= arr.size()) return 0;

        int n = arr.size();
        int maxSub = 0;
        int ans = 0;

        if (dp[index] != -1) return dp[index];

        for (int i = index; i < min(n, index + k); i++) {
            maxSub = max(maxSub, arr[i]);
            ans = max(ans, (i - index + 1) * maxSub + solve(arr, k, dp, i + 1));
        }

        dp[index] = ans;  
        return ans;
    }
};