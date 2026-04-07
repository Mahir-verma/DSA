// problem i was facing in this problem was that i was shrinking it before adding the element 
// basically my main problem was that the way i was iterating 

// concept
// add right
// while sum >= target:
//     update answer
//     shrink from left
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
// At each r:

// include nums[r]
// if window is valid, try to shrink it as much as possible
// update minimum length before removing from left

// That guarantees the shortest valid window ending at r.
