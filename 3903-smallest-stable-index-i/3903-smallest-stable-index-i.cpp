class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> maxi(n);
        maxi[0] = nums[0];

        vector<int> mini(n);
        mini[n - 1] = nums[n - 1];

        // Max element array till ith index
        for(int i = 1; i < n; i++){
            maxi[i] = max(maxi[i - 1], nums[i]);
        }

        // Min element array from nth index to 0
        for(int i = n - 2; i >= 0; i--){
            mini[i] = min(mini[i + 1], nums[i]);
        }

        // Smallest stable index
        int stable;
        int miniStable = INT_MAX;
        int ans = INT_MAX;

        for(int i = 0; i < n; i++){
            stable = maxi[i] - mini[i];
            if(stable <= k){
                if(stable < miniStable){
                    miniStable = stable;
                    ans = min(ans, i);
                }

            }
        }

        return ans == INT_MAX?-1:ans;
    }
};