class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        int n = s.size();
        for (int i = 0; i<n; i++) {
            if (ans.size()>0 && ans[ans.size()-1] == s[i]) {
                ans.pop_back();
            } else {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};
