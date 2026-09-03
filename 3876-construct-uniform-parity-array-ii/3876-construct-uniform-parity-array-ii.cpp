class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();

        int minOdd = INT_MAX;
        int oddCount = 0;
        int evenCount = 0;

        for(int i = 0; i < n; i++){
            if(nums1[i] % 2 == 0){
                evenCount++;
            }
            else{
                oddCount++;
            }
            minOdd = min(minOdd, nums1[i]);
        }

        if(evenCount == n || oddCount == n){
            return true;
        }

        if(minOdd % 2 == 0 && evenCount < n && oddCount < n){
            return false;
        }

        return true;
    }
};