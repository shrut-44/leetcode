class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char, int> mp;
        unordered_map<char, int> mp1;
        string res = "";
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        stack<char> st;
        for (char c : s) {
            mp[c]--;
            if(mp1.find(c)!=mp1.end()) continue;
            while (!st.empty() && st.top() > c && mp[st.top()] > 0) {
                mp1.erase(st.top());
                st.pop();
            }

            // Add current character to result
            st.push(c);
            mp1[c]++;
        }
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};