// the i<j here only represents the uniqueness of the pair 
// i was also thinking about the brute force of the like two loops 
// but the two pointer way is to sort first and count and add the h-l index for the number of pairs 

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int l=0;
        int ans=0;
        int h=nums.size()-1;
        while(l<h){
            if(nums[l]+numsx[h]<target){
                ans+=h-l;
                l++; 
            }else{
                h--;
            }
        }
        return ans;
    }
};
