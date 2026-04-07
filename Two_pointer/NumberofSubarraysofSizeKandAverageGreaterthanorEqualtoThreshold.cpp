// this was a easy question done it in few time 
// time was consumned in just ordering the r like when to calulate average in order 
// change the average to simple multiplication
// Build first window of size k
// For each next position:
//     add new element
//     remove old element
//     update answer
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int r = 0;
        int n = arr.size();
        long long sum = 0;
        int ans = 0;
        long long thresholdsum = 1LL * k * threshold;
        while (r < k) {
            sum += arr[r++];
        }
        if (sum >= thresholdsum) {
            ans++;
        }
        while (r < n) {
            sum -= arr[r - k];
            sum += arr[r++];
            if (sum >= thresholdsum) {
                ans++;
            }
        }
        return ans;
    }
};
