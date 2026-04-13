// did this not much difficult only check for plaindrome from the next character which do not match 
class Solution {
public:
    bool pali(string &a,int left,int right){
        int l=left;
        int r=right;
        while(l<r){
            if(a[l++]!=a[r--]){
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left=0;
        int right=s.length()-1;
        while(left<right){
            if(s[left]!=s[right]){
                if(pali(s,left+1,right)) return true;
                else if(pali(s,left,right-1)) return true;
                else return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
