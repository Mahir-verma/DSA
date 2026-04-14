// my solution was also working but the only problem i was facing was 
// str += s[i] or str += ' '
// so it was giving the tle error but in push_back() it uses O(1) so making overall O(N) time complexity 
// we can also do this from end by 
// first creating the string of size n + m and initialize with ' '
//   second iterate from last and if i == nums[j] then move back 
// else assign that with ans[k--]=s[i--];

        // string ans(n + m, ' ');
        // int i = n - 1;
        // int j = m - 1;
        // int k = n + m - 1;
        // while (i >= 0) {
        //     if (j >= 0 && i == spaces[j]) {
        //         k--;
        //         j--;
        //     }
        //     ans[k--] = s[i--];
        // }
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n=s.length();
        int m=spaces.size();
        string str="";
        int i=0;
        int j=0;
        while(i<n){
            if(j<m && i==spaces[j]){
                str.push_back(' ');
                j++;
            }
            str.push_back(s[i]);
            i++;
        }
        // while(j<m){
        //     str.push_back(' ');
        //     j++;
        // }
        return str;
    }
};
