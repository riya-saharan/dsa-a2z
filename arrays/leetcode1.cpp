//two sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int N = nums.size();
        vector<int> v;
        for(int i=0; i<N; i++){
            for(int j=1; j<N; j++){
                if(nums[i]+nums[j]==target && i!=j){
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }
        return v;// return empty list if no pair found
    }
};