// not a very gud question i have written the code that is not giving the write output 
// it was easy to understand after seeing the solution but still i nedd to work on these (cry cry emoji...)

class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0;
        int indx=0;
        while(i<n){
            char curr=chars[i];
            int cnt=0;
            while(i<n && chars[i]==curr){   //traverse till same element 
                i++;
                cnt++;
            }
            chars[indx++]=curr;
            if(cnt>1){
                string count=to_string(cnt);  // make way o create the 12 in '1' and '2' character 
                for(char c:count){
                    chars[indx++]=c;
                }
            }
        }
        return indx;
    }
};
