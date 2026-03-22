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
    using ls=ListNode*;
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ls dummy= new ListNode(0);
        ls curr=dummy;
        while(list1!=nullptr && list2!=nullptr){
            if(list1->val<=list2->val){
                curr->next=list1;
                curr=curr->next;
                list1=list1->next;
            }else{
                curr->next=list2;
                curr=curr->next;
                list2=list2->next;
            }
        }
        if(list2!=nullptr){
            curr->next=list2;
        }
        if(list1!=nullptr){
            curr->next=list1;
        }
        return dummy->next;
    }
};
