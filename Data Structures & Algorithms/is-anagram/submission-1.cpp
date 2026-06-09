class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> alp(26,0);
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            alp[s[i]-'a']++;
            alp[t[i]-'a']--;
        }
        for(int i=0;i<alp.size();i++){
            if(alp[i]!=0){
                return false;
            }
        }
        return true;
    }
};
