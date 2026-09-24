class Solution {
public:
    int summ(int i){
        int sum = 0;
        int c;

        while(i > 0){
            c = i % 10;
            sum += c;
            i = i / 10;
        }

        return sum;
    }


    int smallestIndex(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(summ(nums[i]) == i){
                return i;
            }
        }

        return -1;
    }
};