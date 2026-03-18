class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int closest = INT_MAX;
        int ans;
        for (int i = 0; i < n; i++) {
            int left = i + 1;
            int right = n - 1;
            while (left < right) {
                int sum = nums[i] + nums[right] + nums[left];
                int diff=abs(sum-target);
                if(diff<closest){
                    ans=sum;
                    closest=diff;
                }
                if (sum > target)
                    right--;
                else {
                    left++;
                }
            }
        }
            return ans;
    }
};