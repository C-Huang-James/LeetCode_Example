from typing import Optional
"""
Merge two sorted linked lists and return it as a new sorted list.
The new list should be made by splicing together the nodes of the first two lists.
"""

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        # Create a dummy node to simplify the merge process
        dummy = ListNode(0)
        current = dummy

        # Traverse both lists and append the smaller node to the merged list
        while list1 and list2:
            if list1.val < list2.val:
                current.next = list1
                list1 = list1.next
            else:
                current.next = list2
                list2 = list2.next
            current = current.next

        # If there are remaining nodes in either list, append them to the merged list
        if list1:
            current.next = list1
        elif list2:
            current.next = list2

        # Return the merged list, which starts from the next node of the dummy node
        return dummy.next
    

# Example usage:
if __name__ == "__main__":
    # Create two sorted linked lists: 1 -> 2 -> 4 and 1 -> 3 -> 4
    list1 = ListNode(1, ListNode(2, ListNode(4)))
    list2 = ListNode(1, ListNode(3, ListNode(4)))

    # Merge the two lists
    solution = Solution()
    merged_list = solution.mergeTwoLists(list1, list2)

    # Print the merged list
    current = merged_list
    while current:
        print(current.val, end=" -> ")
        current = current.next
    print("None")