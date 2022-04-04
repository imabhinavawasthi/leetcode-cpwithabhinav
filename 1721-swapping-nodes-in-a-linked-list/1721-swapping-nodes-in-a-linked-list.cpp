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
    ListNode* swapNodes(ListNode* head, int k) {
        int a,b,l=0;
        ListNode* p;
        ListNode* q;
        ListNode* r;
        p=head;
        q=head;
        r=head;
        while(p!=NULL){
            l++;
            if(l==k){
                a=p->val;
            }
            p=p->next;
        }
        int in=0;
        while(q!=NULL){
            in++;
            if(in==(l-k+1)){
                b=q->val;
            }
            q=q->next;
        }
        in=0;
        while(r!=NULL){
            in++;
            if(in==k){
                r->val=b;
            }
            else if(in==(l-k+1)){
                r->val=a;
            }
            r=r->next;
        }
        return head;
    }
};