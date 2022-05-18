// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void push(struct Node **head_ref, int new_data) {

    struct Node *new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void convert(Node *head, TreeNode *&root);

void lvl(TreeNode *r) {
    if (r == NULL) return;
    queue<TreeNode *> q;
    q.push(r);
    while (!q.empty()) {
        TreeNode *j = q.front();
        cout << j->data << " ";
        q.pop();
        if (j->left) q.push(j->left);
        if (j->right) q.push(j->right);
    }
}

void reverses(Node **head) {
    Node *prev = NULL;
    Node *cur = *head;
    Node *nxt;
    while (cur != NULL) {
        nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    *head = prev;
}

/* Driver program to test above function*/
int main() {
    int T, i, n, l, k;

    cin >> T;

    while (T--) {
        struct Node *head = NULL;

        cin >> n;
        for (i = 1; i <= n; i++) {
            cin >> l;
            push(&head, l);
        }
        reverses(&head);
        TreeNode *root = NULL;
        convert(head, root);
        if (root == NULL) cout << "-1\n";
        lvl(root);
        cout << endl;
        // inorder(root);
        getchar();
    }
    return 0;
}
// } Driver Code Ends


/*
The structure of Link list Node is as follows
struct Node
{
    int data;
    struct node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
The structure of TreeNode is as follows
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
};
*/

//Function to make binary tree from linked list.
void convert(Node *head, TreeNode *&root) 
{
    //queue to store the parent nodes.
    queue<TreeNode *> q;
    
    //base case.
    if (head == NULL) 
    {
        root = NULL;
        return;
    }
    
    //the first node is always the root node so we add it to the queue.
    root = new TreeNode(head->data);
    q.push(root);
    
    head = head->next;
    
    //using a loop until we reach end of the linked list.
    while (head) 
    {
        //storing the front node from queue and removing it from queue.
        TreeNode *k = q.front();
        q.pop();
        
        //taking next two nodes from the linked list and adding them as 
        //children of the current parent node. Pushing them into the queue
        //so that they will be parents to the future nodes.
        TreeNode *leftT = NULL;
        TreeNode *rightT = NULL;
        leftT = new TreeNode(head->data);

        q.push(leftT);
        head = head->next;
        if (head) 
        {
            rightT = new TreeNode(head->data);
            q.push(rightT);
            head = head->next;
        }
        
        //assigning left and right children of parent node.
        k->left = leftT;
        k->right = rightT;
    }
}
