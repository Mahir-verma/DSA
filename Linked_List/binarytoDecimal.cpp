// i have done with the basic approach that rever the linked list then make the cnt move from zero and mulipy with the base 
// optomal and
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
    
    int getDecimalValue(ListNode* head) {
        head=reverse(head);
        int cnt=0;
        long long deci=0;
        while(head!=nullptr){
            deci=deci+(head->val)*(pow(2,cnt));
            cnt++;
            head=head->next;
        }
        return deci;
    }
};  
//        NEW

// this is the thinking that base multiplication
//    ans=ans * base + digitsum
//   when to use when we move from left to right means  example 1234 and moves form 1 to 4 in that case we use this base multiplication or we can say that shiftinhg os the digits 
class Solution {
    using ls=ListNode*;
public:    
    int getDecimalValue(ListNode* head) {
        int deci=0;
        while(head!=nullptr){
            deci=deci*2+(head->val);  // deci=(deci<<1)|head->val;
            head=head->next;
        }
        return deci;
    }
};

// Situation	Method
// Left → Right            ans = ans * base + digit
// Right → Left           	digit * (base^pos)
