class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> store;
        for(int i=0;i<nums.size();i++){
            int complement=target-nums[i];
            if(store.contains(complement)){
                ans.push_back(store[complement]);
                ans.push_back(i);
                return ans;
            }
            else{
                store[nums[i]]=i;
            }
        } 
        return ans;
    }
};
