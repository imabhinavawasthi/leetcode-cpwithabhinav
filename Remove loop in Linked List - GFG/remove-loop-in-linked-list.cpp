// { Driver Code Starts
// driver code

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

bool isLoop(Node* head)
{
    if(!head) return false;
    
    Node* fast = head->next;
    Node* slow = head;
    
    while( fast != slow)
    {
        if( !fast || !fast->next ) return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return true;
}

int length(Node* head)
{
    int ret = 0;
    while(head)
    {
        ret++;
        head = head->next;
    }
    return ret;
}


 // } Driver Code Ends
/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
    public:
 
    /* This function detects and removes loop in the list
      If loop was there in the list then it returns 1,
      otherwise returns 0 */
    void detectAndRemoveLoop(Node* list)
    {
        Node *slow_p = list, *fast_p = list;
     
        // Iterate and find if loop exists or not
        while (slow_p && fast_p && fast_p->next) {
            slow_p = slow_p->next;
            fast_p = fast_p->next->next;
     
            /* If slow_p and fast_p meet at some point then there
               is a loop */
            if (slow_p == fast_p) {
                removeLoop(slow_p, list);
     
                /* Return 1 to indicate that loop is found */
                return;
            }
        }
     
        /* Return 0 to indicate that there is no loop*/
        return ;
    }
     
    /* Function to remove loop.
     loop_node --> Pointer to one of the loop nodes
     head -->  Pointer to the start node of the linked list */
    void removeLoop(Node* loop_node, Node* head)
    {
        Node* ptr1 = loop_node;
        Node* ptr2 = loop_node;
     
        // Count the number of nodes in loop
        int k = 1, i;
        while (ptr1->next != ptr2) {
            ptr1 = ptr1->next;
            k++;
        }
     
        // Fix one pointer to head
        ptr1 = head;
     
        // And the other pointer to k nodes after head
        ptr2 = head;
        for (i = 0; i < k; i++)
            ptr2 = ptr2->next;
     
        /*  Move both pointers at the same pace,
          they will meet at loop starting node */
        while (ptr2 != ptr1) {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
     
        // Get pointer to the last node
        while (ptr2->next != ptr1)
            ptr2 = ptr2->next;
     
        /* Set the next node of the loop ending node
          to fix the loop */
        ptr2->next = NULL;
    }
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        detectAndRemoveLoop(head);
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        ob.removeLoop(head);
        
        if( isLoop(head) || length(head)!=n )
            cout<<"0\n";
        else
            cout<<"1\n";
    }
	return 0;
}
  // } Driver Code Ends