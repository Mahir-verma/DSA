// after a lot of time get to know about that it stores the index of the characte and then compare 
// left with the index of repeating element 
// shifts the index of the left to the next elemnt of that duplicate index 
// like 
// left=hash[s[r]] + 1


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxlen=0;
        int l=0;
        int r=0;
        vector<int>hash(128,-1);
        while(r<n){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1;
                }
            }
            hash[s[r]]=r;
            maxlen=max(maxlen,r-l+1);
            r++; 
        }
        return maxlen;
    }
};
