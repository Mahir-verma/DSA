// the question is like done i brute force by sending one row at a time and finding the index where target is less than 0;
// and two pointer approach At each negative cell, you instantly count all remaining elements below it in that column instead of checking them one by one.
//       Move left if you find a negative
//       Move down if it's non-negative
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int j=n-1;
        int i=0;
        int ans=0;
        while(i<m && j>=0){
            if(grid[i][j]<0){
                ans+=m-i;
                j--;
            }else{
                i++;
            }
        }
        return ans;
    }
};
