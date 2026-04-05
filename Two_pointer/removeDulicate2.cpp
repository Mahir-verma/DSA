// first i was trying it with unordered map to store the number with their index 
// then came across set data structure to use it 
// idea was simple to chck that if number present in the window return false else return fasle

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        int r = 0;
        unordered_set<int> st;
        while (r < n) {
            if(r>k){
                st.erase(nums[r-k-1]);
            }
            if(st.find(nums[r])!=st.end()){
                return true;
            }
            st.insert(nums[r++]);
        }
        return false;
    }
};

// now the map one in which we store the number and their index 
//         unordered_map<int, int> last;

//         for (int i = 0; i < nums.size(); i++) {
//             if (last.count(nums[i]) && i - last[nums[i]] <= k) {   // count function see whether the number is present or not 
//                 return true;
//             }
//             last[nums[i]] = i;    //directly it store the number with value index
//         }

//         return false;
//     }
