class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int i,j;
    for(i=0;i<nums.size();i++){
        for(j=i+1;j<nums.size();j++){
            if(nums.at(i)+nums.at(j)==target){
             return {i,j};
                }
            }
        }
        return {0,0};
    }};
