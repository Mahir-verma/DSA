// Fixed-size sliding window
// Build first window of size k
// Then for each step:
//     add new element
//     remove old element
//     update answer

// little optimization max avg is asame as max sum and then take the average 

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        int r=0;
        int l=0;
        int n=nums.size();
        while(r<k){
            sum+=nums[r++];
        }
        double avg=sum/k;
        double maxavg=avg;
        while(r<n){
            sum+=nums[r++];
            sum-=nums[l++];            
            avg=sum/k;
            maxavg=max(avg,maxavg);

        }
        return maxavg;
    }
};
