// Same direction matching
// i on smaller string
// j on larger string

// if match -> move both logically (i++, j++)
// if no match -> move j
// if i reaches end -> true
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        if (n == 0) {
            return true;
        }
        if (n > m)
            return false;
        int i = 0;
        int j = 0;
        while (i < n && j < m) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }
        if (i == n) {
            return true;
        }

        return false;
    }
};

