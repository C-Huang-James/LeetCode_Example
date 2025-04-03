#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution1 {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> stack1 = {};
        vector<int> stack2 = {};
        while (list1)
        {
            stack1.push_back(list1->val);
            list1=list1->next;
        }
        while (list2)
        {
            stack2.push_back(list2->val);
            list2=list2->next;
        }
        vector<int> stack;
        merge(stack1.begin(), stack1.end(), stack2.begin(), stack2.end(), std::back_inserter(stack));
        // Create the merged linked list
        ListNode* dummy = new ListNode(); // Dummy node to simplify list construction
        ListNode* current = dummy;
        
        for (int i = 0; i < stack.size(); i++) {
            current->next = new ListNode(stack[i]); // Create a new node with the value
            current = current->next;               // Move to the next node
        }
        
        return dummy->next; // Return the head of the merged list (skip the dummy node)
    }
};

class Solution2 {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            // Create the merged linked list
            ListNode dummy; 
            ListNode* current = &dummy;
            
            while (list1 && list2)
            {
                if(list1->val <= list2->val)
                {
                    current->next = list1;
                    list1 = list1->next;
                }
                else
                {
                    current->next = list2;
                    list2 = list2->next;
                }
                current = current->next;
            }
    
            current->next = list1 ? list1 : list2;
    
            return dummy.next;
    
        }
    };

int main() {
    // Example usage:
    ListNode* list1 = new ListNode(1, new ListNode(2, new ListNode(4)));
    ListNode* list2 = new ListNode(1, new ListNode(3, new ListNode(4)));
    
    Solution2 solution;
    ListNode* mergedList = solution.mergeTwoLists(list1, list2);
    
    // Print the merged list
    while (mergedList) {
        cout << mergedList->val << " ";
        mergedList = mergedList->next;
    }
    
    return 0;
}