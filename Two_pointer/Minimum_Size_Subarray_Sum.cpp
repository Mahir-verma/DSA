// problem i was facing in this problem was that i was shrinking it before adding the element 
// basically my main problem was that the way i was iterating 

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int r = 0;
        int n = nums.size();
        int l = 0;
        int sum = 0;
        int len = INT_MAX;
        while (r < n) {
            sum += nums[r];
            while (sum >= target) {
                len = min(len, r - l + 1);
                sum -= nums[l];
                l++;
            }
            r++;
        }
        return (len == INT_MAX) ? 0 : len;
    }
};
