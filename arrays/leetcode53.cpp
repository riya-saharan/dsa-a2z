class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        long long maxi = nums[0];
        int start = 0;
        int ansStart = 0;
        int ansEnd = 0;

        for(int i = 0; i < n; i++){
            sum += nums[i];

            if(sum > maxi){
                maxi = sum;
                ansStart = start;
                ansEnd = i;
            }

            if(sum == 0){
                start = i + 1;
            }

            if(sum < 0){
                sum = 0;
                start = i + 1;
            }
        }

        return maxi;
    }
};