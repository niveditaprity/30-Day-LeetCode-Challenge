class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>str;
        unordered_map<string,vector<string>>m;
        for(int i=0;i<strs.size();i++)
        {
            string temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            m[strs[i]].push_back(temp);
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            str.push_back(it->second);
        }
        return str;
    }
};
