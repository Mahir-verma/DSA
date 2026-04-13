// pretty intersting question 
//  -First hash the s1 string 
//  -keep a count variable of s1 size to 
//  -move the left and right variable leep the check of the frequency and valid window size
//  -if count==0 return true else remove the left char and increase the frequency of that 
// nice question 
// freq[i] = how many chars needed

// Add char → decrease freq
// Remove char → increase freq

// count = remaining characters needed

// if count == 0 → valid permutation

// other way is to use two vector 
// first-keep the freq of the s1
// second-move the right variable acoording to the window size 
// check the frquency of both the vectors in the window 
// if match return true else keep moving till end if not find return false;
// Permutation in String:
// - fixed-size sliding window
// - store freq of s1
// - store freq of current window in s2
// - if both freq arrays match -> permutation found
// class Solution {
// public:
//     bool checkInclusion(string s1, string s2) {
//         int n = s1.size();
//         int m = s2.size();
//         if (n > m) return false;
//         vector<int> freq1(26, 0), freq2(26, 0);
//         for (char c : s1) {
//             freq1[c - 'a']++;
//         }
//         for (int i = 0; i < n; i++) {
//             freq2[s2[i] - 'a']++;
//         }
//         if (freq1 == freq2) return true;
//         for (int r = n; r < m; r++) {
//             freq2[s2[r] - 'a']++;
//             freq2[s2[r - n] - 'a']--;
//             if (freq1 == freq2) return true;
//         }
//         return false;
//     }
// };
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        int r = 0;
        int l = 0;
        if (n > m)
            return false;
        vector<int> hash(26, 0);
        for (char c : s1) {
            hash[c - 'a']++;
        }
        int count = n;
        while (r < m) {
            if (hash[s2[r] - 'a'] > 0)
                count--;
            hash[s2[r] - 'a']--;
            if (count == 0)
                return true;
            if (r - l + 1 == n) {
                if (hash[s2[l] - 'a'] >= 0)
                    count++;
                hash[s2[l] - 'a']++;
                l++;
            }
            r++;
        }
        return false;
    }
};
