class Solution {
public:
    int countCommas(int n) {
        int ans;

        ans = (n > 999)? n-999:0;
        
        return ans;
    }
};