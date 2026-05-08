// easy question simple after revising the upper bound lower bound floor and ceil 
class Solution {
    int negative(vector<int>& v) {
        int low = 0;
        int n = v.size();
        int high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (v[mid] < 0) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return high + 1;
    }
    int positive(vector<int>& v) {
        int low = 0;
        int n = v.size();
        int high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (v[mid] <= 0) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return n - low;
    }

public:
    int maximumCount(vector<int>& nums) {
        int posi = positive(nums);
        int nigga = negative(nums);
        return max(posi, nigga);
    }
};
