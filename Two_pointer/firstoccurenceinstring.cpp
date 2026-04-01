class Solution {             // correct code 
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        if(m==0) return 0;
        for(int i=0;i<=n-m;i++){
            int j=0;
            while(j<m && haystack[i+j]==needle[j]){
                    j++;
            }
            if(j==m) return i;
        }
        return -1;
    }
};
// for every possible start i:
//     compare haystack[i + j] with needle[j]
//     if full match -> return i
// return -1

// CP thinking
// fix starting index in haystack
// try matching the entire needle
// if mismatch, shift start by 1


// my code that i have written in first try
// Main problem
// You are using j as the needle pointer for checking a match, but after a failed attempt, you do not reset j back to 0.
// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int n=haystack.size();
//         int m=needle.size();
//         int i=0;
//         int j=0;
//         while(i<n && j<m){
//             if(haystack[i]==needle[j]){
//                 int r=i;
//                 while(r<n && j<m){
//                     if(haystack[r]!=needle[j]){
//                         break;
//                     }
//                     j++;
//                     r++;
//                 }
//                 if(j==m) return i;
//             }
//             i++;
//         }
//         return -1;
//     }
// };
