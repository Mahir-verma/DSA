// i was thinking about the same solution but was not able to write the code for that 
// also i didn't think of that maxfreq line 
// the if condition was replaced with while
class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans = 0;
        int r = 0;
        int l = 0;
        int maxfreq = 0;
        int n = s.size();
        vector<int> freq(26, 0);
        while (r < n) {
            freq[s[r] - 'A']++;
            maxfreq = max(freq[s[r] - 'A'], maxfreq);
            if ((r - l + 1) - maxfreq > k) {
                freq[s[l] - 'A']--;
                l++;
            };
            ans = max(ans, r - l + 1);

            r++;
        }
        return ans;
    }
};
