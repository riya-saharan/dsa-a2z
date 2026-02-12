class Solution {
public:

    vector<int> getSneakyNumbers(vector<int>& nums) {
        //pre compute 
            int hash[101]={0};
            for(int i=0; i<nums.size(); i++){
                hash[nums[i]]++;
            }
        //fetch 
            vector<int>M;
            for(int i=0; i<101; i++){
                if(hash[i]>1){
                M.push_back(i);        
                }
            }
    return M; 
     }
};
