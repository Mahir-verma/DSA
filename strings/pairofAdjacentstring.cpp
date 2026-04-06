// i think i need to learn the map again it was way difficult then i thoought 
// i tried it by my own but instead failed 
// so i took the help
// below is the answer i get to know about new things and i need to write it and remember it
// concept
// 1 Count frequency of each digit in the whole string
// 2 Check every adjacent pair
// If:
//     s[i] != s[i+1]
//     freq[s[i]] == s[i] - '0'
//     freq[s[i+1]] == s[i+1] - '0'

// then return that pair

// class Solution {
// public:
//     string findValidPair(string s) {
//         unordered_map<char,int>mp;
//         int r=0;
//         int n=s.size();
//         string ans;
//         while(r<n){
//             mp[s[r++]]++;
//         }
//         for(int i=0;i<n-1;i++){
//             int a=s[i]-'0';
//             int b=s[i+1]-'0';
//             if(s[i]!=s[i+1] && mp[a]==a && mp[b]==b){
//                 return s.substr(i,2);
//             }
//         }
//         return "";
//     }
// };

// more optimal solution used thevector as integer digits are only from 0-9
// initialize the vector with 0
// traverse the loop and increase the count
// again traverse the loop from string because order is important 
//    s[i]-'0' it will return the integer 
// and that integer should be equal to the number of the freq like '2' should be present two time and its adjacent should be also present in same way 
// for eaxmaple 221
// output 21 second '2' and adjacent '1'
class Solution {
public:
    string findValidPair(string s) {
        vector<int>pair(10,0);
        int r=0;
        int n=s.size();
        while(r<n){
            pair[s[r++]-'0']++;
        }
        for(int i=0;i<n-1;i++){
            int a=s[i]-'0';
            int b=s[i+1]-'0';
            if(a!=b && pair[a]==a && pair[b]==b){
                return s.substr(i,2);
            }
        }
        return "";
    }
};
