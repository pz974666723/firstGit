#include<iostream>
#include<string>
#include<stack>
#include<vector>
using namespace std;

pair<int, int> expandAroundCenter(const string& s, int left, int right) {
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
        --left;
        ++right;
    }
    return {left + 1, right - 1};
}

string longestPalindrome(string s) {
    int start = 0, end = 0;
    for (int i = 0; i < s.size(); ++i) {
        auto [left1, right1] = expandAroundCenter(s, i, i);
        auto [left2, right2] = expandAroundCenter(s, i, i + 1);//考虑两种情况
        if (right1 - left1 > end - start) {
            start = left1;
            end = right1;
        }
        if (right2 - left2 > end - start) {
            start = left2;
            end = right2;
        }
    }
    return s.substr(start, end - start + 1);
}
int main(){
    string str = "babad";
    cout << longestPalindrome(str) << endl;
    return 0;
}

// string longestPalindrome(string s) {
//         int n = s.size();
//         vector<vector<int>> dp(n, vector<int>(n));
//         string ans;
//         for (int l = 0; l < n; ++l) {
//             for (int i = 0; i + l < n; ++i) {
//                 int j = i + l;
//                 if (l == 0) {
//                     dp[i][j] = 1;
//                 } else if (l == 1) {
//                     dp[i][j] = (s[i] == s[j]);
//                 } else {
//                     dp[i][j] = (s[i] == s[j] && dp[i + 1][j - 1]);
//                 }
//                 if (dp[i][j] && l + 1 > ans.size()) {
//                     ans = s.substr(i, l + 1);
//                 }
//             }
//         }
//         return ans;
