/*In a linked list of size n, where n is even, the ith node (0-indexed) of the linked list is known as the twin of the (n-1-i)th node, if 0 <= i <= (n / 2) - 1.
For example, if n = 4, then node 0 is the twin of node 3, and node 1 is the twin of node 2. These are the only nodes with twins for n = 4.
The twin sum is defined as the sum of a node and its twin.
Given the head of a linked list with even length, return the maximum twin sum of the linked list.*/
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;
    while (curr != NULL) {
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

int pairSum(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    slow = reverseList(slow);
    int maxSum = 0;
    ListNode* firstHalf = head;
    ListNode* secondHalf = slow;
    while (secondHalf != NULL) {
        maxSum = max(maxSum, firstHalf->val + secondHalf->val);
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }
    return maxSum;
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    
    if (n == 0) {
        cout << "No nodes in the list" << endl;
        return 0;
    }
    
    int val;
    cout << "Enter the values of the nodes: ";
    cin >> val;
    ListNode* head = new ListNode(val);
    ListNode* temp = head;
    
    for (int i = 1; i < n; i++) {
        cin >> val;
        temp->next = new ListNode(val);
        temp = temp->next;
    }

    int result = pairSum(head);
    cout << "Maximum twin sum: " << result << endl;
    
    return 0;
}

 