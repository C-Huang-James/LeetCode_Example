#include <iostream>
using namespace std;

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return head; // If the list is empty, return it as is
        ListNode* current = head; // Start with the head of the list
        while (current->next) { // Traverse the list until the second last node
            if (current->val == current->next->val) { // If current and next nodes have the same value
                ListNode* temp = current->next; // Store the next node to delete it later
                current->next = current->next->next; // Skip the duplicate node
                delete temp; // Delete the duplicate node, release the memory
            } else {
                current = current->next; // Move to the next node
            }
        }

        return head; // Return the modified list without duplicates
    }
};

class Other_Solution {
    public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *curr = head;
        while(curr != nullptr)
        {
            if(curr->next != nullptr && curr->next->val == curr->val) //curr->next != nullptr to ensure we don't dereference a null pointer
                curr->next = curr->next->next;
            else
                curr = curr->next;
        }

        return head;
    }
};

int main() {
    Other_Solution solution;
    // Example usage:
    ListNode* head = new ListNode(1, new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(3)))));
    ListNode* result = solution.deleteDuplicates(head);

    // Print the result
    ListNode* current = result;
    while (current) {
        cout << current->val << " ";
        current = current->next;
    }
    
    return 0;
}