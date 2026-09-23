class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int k = reduce(nums.begin(), nums.end()) - x;
        if (k < 0)
            return -1;

        int best = -1;
        int i = 0;
        int sum = 0;
        int n = nums.size();

        for (int j = 0; j < n; j++) {
            sum += nums[j];
            while (sum > k)
                sum -= nums[i++];

            if (sum == k)
                best = max(best, j - i + 1);
        }

        return best < 0 ? -1 : n - best;
    }
};