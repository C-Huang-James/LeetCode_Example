from typing import Optional
# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        current = head
        while current and current.next:
            if current.val == current.next.val:
                # Skip the next node since it's a duplicate
                current.next = current.next.next
            else:
                # Move to the next node
                current = current.next
        return head



# Example usage:
if __name__ == "__main__":
    s = Solution()
    # Creating a sorted linked list: 1 -> 1 -> 2 -> 3 -> 3
    head = ListNode(1, ListNode(1, ListNode(2, ListNode(3, ListNode(3)))))
    # Removing duplicates
    new_head = s.deleteDuplicates(head)
    # Printing the modified linked list
    current = new_head
    while current:
        print(current.val, end=" -> ")
        current = current.next
    print("None")