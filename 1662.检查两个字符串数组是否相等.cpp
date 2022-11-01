/*
 * @lc app=leetcode.cn id=1662 lang=cpp
 *
 * [1662] 检查两个字符串数组是否相等
 */

// @lc code=start
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n = word1.size();
        int m = word2.size();
         int i = 0, j = 0, x = 0, y = 0;
        while (i < n && j < m) {
            if (word1[i][x++] != word2[j][y++]) return false;
            if (x == word1[i].size()) x=0, i++;
            if (y == word2[j].size()) y=0, j++;
        }
        return i == n && j == m;
    }
};
// @lc code=end

