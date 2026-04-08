it was simple that we should only find the number unique non zero integer  hehe i used ghe hint 
but my thinking was to find the smallest non zero in the array and subtract it 


class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int>st;
        int r=0;
        int n=nums.size();
        while(r<n){
            if(nums[r]!=0){
            st.insert(nums[r]);
            }
            r++;
        }
        return st.size();
    }
};
