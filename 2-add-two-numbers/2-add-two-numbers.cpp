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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c=0;
        ListNode* anss = new ListNode(0);
        ListNode* a=l1;ListNode* b=l2;ListNode* curr=anss;
        while(a!=NULL||b!=NULL){
            int x,y;
            if(a!=NULL)x=a->val;
            else x=0;
            if(b!=NULL)y=b->val;
            else y=0;
            int s=x+y+c;
            c=s/10;
            curr->next=new ListNode(s % 10);
            curr=curr->next;
            if(a!=NULL)a=a->next;
            if(b!=NULL)b=b->next;
        }
        if(c!=0){
            curr->next=new ListNode(c);
        }
        return anss->next;
    }
};