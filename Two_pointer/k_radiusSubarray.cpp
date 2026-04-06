// very gud question i have done it by my own i like this 
// just keep the increment and position of 'r' in mind and use the window with the prefix sum
class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans(n,-1);
        int r=0;
        int divi=2*k+1;
        if(n<divi) return ans;
        long long sum=0;
        while(r<divi){
            sum+=nums[r++];
        }
        ans[r-k-1]=sum/divi;
        while(r<n){
            sum-=nums[r-divi];
            sum+=nums[r++];
            ans[r-k-1]=sum/divi;
        }
        return ans;
    }
};
