class Solution {
public:
    bool isvowel(char c){
        return (c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u');// or use direct tolower(s) to create the capital letters to smaller case and then check for the vowels 
    }
    string reverseVowels(string s) {
        int n = s.size();
        int left = 0;
        int right = n - 1;
        while (left < right) {
            while(left<right && !isvowel(s[left])) left++;
            while(left<right && !isvowel(s[right])) right--;
            char temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            left++;
            right--;
        }
        return s;
    }
};

//TC O(N)
//SC O(1)
