class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ans;
        for (string str : strs) {
            string temp = str;
            sort(temp.begin(), temp.end());
            ans[temp].push_back(str);
        }
        vector<vector<string>> result;
        for(auto it : ans)
            result.push_back(it.second);
        return result;
    }
};
