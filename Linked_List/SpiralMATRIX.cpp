// create a 2d matrix of null 
// at the end of row or coloumn rotate the indexing by 90 degree
// difficult to undersatnd in first but easy to understand
// l=left r=right t=top b=bottom
// same as spiral matrix but use the temp!=nullptr condition in all including for loops 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {

        vector<vector<int>> ans(m, vector<int>(n, -1));

        ListNode* temp=head;
        int l=0;
        int r=n-1;
        int t=0;
        int b=m-1;
        while(l<=r && t<=b && temp!=nullptr){
            for(int i=l;i<=r && temp!=nullptr;i++){
                ans[t][i]=temp->val;
                temp=temp->next;
            }
            t++;
            for(int i=t;i<=b && temp!=nullptr;i++){
                ans[i][r]=temp->val;
                temp=temp->next;
            }
            r--;
            if(t<=b){
                for(int i=r;i>=l && temp!=nullptr;i--){
                    ans[b][i]=temp->val;
                    temp=temp->next;
                }
                b--;
            }
            if(l<=r){
                for(int i=b;i>=t && temp!=nullptr;i--){
                    ans[i][l]=temp->val;
                    temp=temp->next;
                }
                l++;
            }
        }
        return ans;
    }
};
