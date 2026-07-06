class Solution {
public:
    vector<int> generate(string& str){
        vector<int> nums(26,0);
        for(int i=0;i<str.length();i++){
            nums[str[i]-int('a')]++;
        }
        return nums;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<vector<int>,vector<string>> stress;
        for(int i=0;i<strs.size();i++){
            stress[generate(strs[i])].push_back(strs[i]);
        }
        for (auto &it : stress) {
        ans.push_back(it.second);
        }
        return ans;
   }
};
