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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)return head;
        int x=head->val;
        ListNode *t=new ListNode;
        t=head;
        ListNode *p;
        p=head;head=head->next;
        while(head!=NULL){
            
            if(head->val==x){
                p->next=head->next;
                head=head->next;
            }else{
                x=head->val;
                p=head;
                head=head->next;
                
            }
        }
        return t;
    }
};