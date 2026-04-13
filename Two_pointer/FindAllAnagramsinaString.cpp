// similar to permuation question but instead of returning true return the ans storing all the index of valid strings 

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=p.length();
        int m=s.length();
        int l=0;
        int r=0;
        int count=n;
        vector<int>ans;
        vector<int>hash(26,0);
        for(char c : p){
            hash[c-'a']++;
        }
        while(r<m){
            if(hash[s[r]-'a']>0) count--;
            hash[s[r]-'a']--;
            if(count ==0){
                ans.push_back(r-n+1);
            }
            if(r-l+1==n){
                if(hash[s[l]-'a']>=0) count++;
                hash[s[l]-'a']++;
                l++;
            }
            r++;
        }
        return ans;
    }
};
