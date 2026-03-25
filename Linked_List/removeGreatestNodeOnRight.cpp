// thid not so optimal solution but i have seen the hint but coded by my own 
// first reverse the linked list then link in increasing order then rever the linked list again 
// gud question 



class Solution {
    using ls=ListNode*;
    ListNode* reverse(ls head){
        ls temp=head;
        ls prev=nullptr;
        while(temp!=nullptr){
            ls front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
public:
    ListNode* removeNodes(ListNode* head) {
        ls mx=reverse(head);
        ls temp=mx;
        ls curr=mx->next;
        while(curr!=nullptr){
            if(curr->val>=mx->val){
                mx->next=curr;
                mx=curr;
                curr=curr->next;
            }else{
                mx->next=curr->next;
                curr=mx->next;
            }
        }
        return reverse(temp);
    }
};
