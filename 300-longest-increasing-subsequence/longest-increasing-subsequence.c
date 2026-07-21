
int lengthOfLIS(int* nums, int numsSize) {
    if (numsSize == 0)
        return 0;

    int dp[numsSize];

    // Initialize every element to 1
    for (int i = 0; i < numsSize; i++) {
        dp[i] = 1;
    }

    // Build the DP array
    for (int i = 1; i < numsSize; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[j] < nums[i]) {
                int m1 = dp[i];
                int m2 = dp[j] + 1;
                dp[i] = (m1 > m2) ? m1 : m2;
            }
        }
    }

    // Find the maximum value in dp
    int m = dp[0];
    for (int i = 1; i < numsSize; i++) {
        if (dp[i] > m) {
            m = dp[i];
        }
    }

    return m;
}
